#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include <cctype>
int is_operator(char c)
{
    if (c != '+' && c != '*' && c != '-' && c != '/')
        return 0;
    return 1;
}
bool is_space(char c)
{
    if (c == '\t' || c == ' ')
        return true;
    return false;
}
int check_errors(char *av)
{
    int i = 0;
    int op = 0;
    int digits = 0;
    if (strlen(av) < 3)
    {
        std::cout<<"Error : Your input is too short."<<std::endl;
        return 0;
    }
    if (strlen(av) >= 3 && is_operator(av[1]))
    {
        std::cout<<"Error : Your input conatins an operator symbol in the wrong place"<<std::endl;
        return 0;
    }
    while (av[i])
    {
        if (is_space(av[i]))
        {
            i++;
            continue;
        }
        if (av[i] >= '0' && av[i] <= '9')
            digits++;
        else if (is_operator(av[i]))
            op++;
        else
        {
            std::cout<<"Error : input invalid."<<std::endl;
            return 0;
        }
        i++;
    }
    if (op >= digits)
    {
        std::cout<<"Error : your input doesn't valid"<<std::endl;
        return 0;
    }
    return 1;
}

int result(int num1,int num2,char op)
{
    if (op == '+')
        return num1 + num2;
    if (op == '-')
        return num1 - num2;
    if (op == '*')
        return num1 * num2;
    else
        return num1 / num2;
}

void calculator(std::string str)
{
    std::stack<int> nums;
    int num1;
    int num2;
    str.erase(std::remove_if(str.begin(), str.end(), is_space), str.end());
    std::string::iterator it = str.begin();
    for(;it != str.end();it++)
    {
        if (isdigit(*it))
            nums.push((*it - 48));
        else if (is_operator(*it))
        {
           num2 = nums.top();
           nums.pop();
           num1 = nums.top();
           nums.pop();
           nums.push(result(num1,num2,*it));
        }
    }
    std::cout<<"result = "<<nums.top();
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        if (check_errors(av[1]))
        {
            calculator(av[1]);
        }
    }
}