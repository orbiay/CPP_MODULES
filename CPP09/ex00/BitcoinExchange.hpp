#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include<iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
class BitcoinExchange
{
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange operator=(const BitcoinExchange &obj);
        BitcoinExchange(const BitcoinExchange &obj);
        void insert(std::map<std::string,float> &data,std::ifstream &infile);
        void utils(std::string av,std::map<std::string,float> &date,std::map<std::string,float> &data);
        int check_line(std::string line,std::map<std::string,float> &date);
        void calculate(std::string line,std::map<std::string,float> &date,std::map<std::string,float> &data);
        int get_size(std::stringstream &ss);
        std::string get_first_word(std::stringstream &ss);
        std::string get_last_word(std::stringstream &ss);
        std::string get_middle_word(std::stringstream &ss);
        int is_dicimal(std::string &str);
};
#endif