
#include"BitcoinExchange.hpp"

std::map<std::string,float> dates()
{
    std::map<std::string,float> dates;
    std::ofstream out("alldates");
    std::string str_year;
    std::string str_month;
    std::string str_day;
    int year = 2009;
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
        BitcoinExchange obj;
        if (!infile.is_open())
        {
            std::cerr<<"Error opening file!"<<std::endl;
            return 0;
        }
        obj.insert(data,infile);
        infile.close();
        obj.utils(av[1],date,data);
    }
    else
        std::cerr<<"Error: could not open file."<<std::endl;
}