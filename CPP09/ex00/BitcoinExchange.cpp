#include"BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){

}
BitcoinExchange::~BitcoinExchange(){

}

void BitcoinExchange::insert(std::map<std::string,float> &data,std::ifstream &infile)
{
    std::string line;
    std::getline(infile,line);

    while(std::getline(infile,line))
        data[line.substr(0,10)] = std::atof(line.substr(11).c_str());
}
int BitcoinExchange::get_size(std::stringstream &ss)
{ 
    int count = 0;
    std::string word;
    while (ss >> word)
        count++;
    return count;
}

std::string BitcoinExchange::get_first_word(std::stringstream &ss)
{
    std::string word;
    ss >> word;
    return (word);
}

std::string BitcoinExchange::get_last_word(std::stringstream &ss)
{
    std::string word;
    while (ss >> word);
    return (word);
}

std::string BitcoinExchange::get_middle_word(std::stringstream &ss)
{
    int count = 0;
    std::string word;
    while (ss >> word)
    {
        if (count == 1)
            break;
        count++;
    }
    return word;
}

int BitcoinExchange::is_dicimal(std::string &str)
{
    std::string::iterator iter = str.begin();
    int point = 0;
    while (iter != str.end())
    {
        if ((*iter >= '0' && *iter <= '9') || *iter == '.')
        {
            if ((*iter == '.' && iter == str.begin()) || point > 1 || (*iter == '.' && iter == str.end() - 1))
                return 0;
            else if (*iter == '.')
                point++;
        }
        else
            return 0;
        iter++;
    }
    return 1;
}
void BitcoinExchange::calculate(std::string line,std::map<std::string,float> &date,std::map<std::string,float> &data)
{
    std::string first;
    std::string last;
    (void)date;
    float   num;
    std::stringstream ss(line);
    first = get_first_word(ss);
    last = get_last_word(ss);
    num = std::atof(last.c_str());
    std::map<std::string,float>::iterator iter = data.find(first);
    if (iter != data.end())
        std::cout<<first<<" => "<<num<<" = "<<num * data[first]<<std::endl;
    else
    {
        std::map<std::string,float>::iterator it = data.upper_bound(first);
        if (it != data.begin())
            it--;
        std::cout<<first<<" => "<<num<<" = "<<num * it->second<<std::endl;
    }
}

void BitcoinExchange::utils(std::string av,std::map<std::string,float> &date,std::map<std::string,float> &data)
{
    std::ifstream infile(av);
    if (!infile.is_open())
    {
        std::cerr<<"Error opening file!"<<std::endl;
        return ;
    }
    std::map<std::string,float> stats;
    std::string line;
    std::getline(infile,line);
    if (line != "date | value")
        std::cout<<"Error : Your first line must contain a string like \"date | value\""<<std::endl;
    while(std::getline(infile,line))
    {
        if (check_line(line,date))
        {
            stats[line.substr(0,10)] = std::atof(line.substr(13).c_str());
            calculate(line,date,data);
        }
    }
    infile.close();
}

int BitcoinExchange::check_line(std::string line,std::map<std::string,float> &date)
{
    //std::cout<<"line == "<<line<<std::endl;
    std::stringstream ss(line);
    std::stringstream ss1(line);
    std::stringstream ss2(line);
    std::stringstream ss4(line);
    std::string last = get_last_word(ss2);
    if (date[get_first_word(ss1)] != 1)
    {
        std::cout<<"Error: bad input => "<<line.substr(0,10)<<std::endl;
        return 0;
    }
    if (get_size(ss) != 3)
    {
        std::cout<< "Error : something is wrong in your input file."<<std::endl;
        return 0;
    }
    if (std::atof(last.c_str()) > 1000 || std::atof(last.c_str()) < 0 || !is_dicimal(last))
    {
        if (std::atof(last.c_str()) > 1000)
            std::cout<<"Error: too large a number."<<std::endl;
        else
            std::cout<<"Error: not a positive number."<<std::endl;
        return 0;
    }
    if (get_middle_word(ss4) != "|")
    {
        std::cout<<"Error : check if your input contains '|'."<<std::endl;
        return 0;
    }
    return 1;
}


BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange &obj){
    (void)obj;
    return *this;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj){
    (void)obj;
}