#ifndef RPN_HPP
#define RPN_HPP
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include <cctype>
class Rpn{
    public:
        Rpn();
        ~Rpn();
        Rpn(const Rpn &obj);
        Rpn operator=(const Rpn &obj);
        bool is_space(char c);
        int is_operator(char c);
        int check_errors(char *av);
        int result(int num1,int num2,char op);
        void calculator(std::string str);
};
#endif