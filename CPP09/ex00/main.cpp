
#include<iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

void insert(std::map<std::string,float> &data,std::ifstream &infile)
{
    std::string line;
    std::getline(infile,line);

    while(std::getline(infile,line))
    {
        data[line.substr(0,10)] = std::atof(line.substr(11).c_str());
        //exit(0);
    }
}

int get_size(std::stringstream &ss)
{ 
    int count = 0;
    std::string word;
    while (ss >> word)
        count++;
    return count;
}

std::string get_first_word(std::stringstream &ss)
{
    std::string word;
    ss >> word;
    return (word);
}

std::string get_last_word(std::stringstream &ss)
{
    std::string word;
    while (ss >> word);
    return (word);
}

std::string get_middle_word(std::stringstream &ss)
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

int is_dicimal(std::string &str)
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

int check_line(std::string line,std::map<std::string,float> &date)
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
    if (get_size(ss) != 3)
    {
        std::cout<< "Error : something is wrong in your input file."<<std::endl;
        return 0;
    }
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

void calculate(std::string line,std::map<std::string,float> &date,std::map<std::string,float> &data)
{
    std::string first;
    std::string last;
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

void utils(std::string av,std::map<std::string,float> &date,std::map<std::string,float> &data)
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
    {
        std::cout<<"Error : Your first line must contain a string like \"date | value\""<<std::endl;
        infile.close();
        exit(0);
    }
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

std::map<std::string,float> dates()
{
    std::map<std::string,float> dates;
    std::ofstream out("alldates");
    std::string str_year;
    std::string str_month;
    std::string str_day;
    int year = 2011;
    int month = 1;
    int day = 1;
    while (year < 2024)
    {
        str_year = std::to_string(year) + "-";
        month = 1;
        while (month < 13)
        {
            if (month < 10)
                str_month = "0" + std::to_string(month) + "-";
            else
                str_month = std::to_string(month) + "-" ;
            if (month == 4 && year == 2023)
                break;
            day = 1;
            while (day < 32)
            {
                if (day < 10)
                    str_day = "0" + std::to_string(day);
                else 
                    str_day = std::to_string(day);
                dates[str_year+str_month+str_day] = 1;
                out << str_year+str_month+str_day<<"\n";
                if (day == 28 && month == 2)
                    break;
                if (month <= 8)
                {
                    if (month % 2 == 0 && day == 30 && month != 8)
                        break;
                }
                if(month > 8)
                {
                    if (month % 2 != 0 && day == 30)
                        break;
                }
                day++;
            }
            month++;
        }
        year++;
    }
    return dates;
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::map<std::string,float> date = dates();
        std::map<std::string,float> data;
        std::ifstream infile("data.csv");
        if (!infile.is_open())
        {
            std::cerr<<"Error opening file!"<<std::endl;
            return 0;
        }
        insert(data,infile);
        infile.close();
        utils(av[1],date,data);
    }
    else
        std::cerr<<"Error: could not open file."<<std::endl;
}