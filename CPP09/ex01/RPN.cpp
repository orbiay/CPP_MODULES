#include"RPN.hpp"

Rpn::Rpn(){

}
int Rpn::is_operator(char c)
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

int Rpn::check_errors(std::string av)
{
    int i = 0;
    int op = 0;
    int digits = 0;
    av.erase(std::remove_if(av.begin(), av.end(), is_space), av.end());
    if (strlen(av.c_str()) < 3)
    {
        std::cout<<"Error : Your input is too short."<<std::endl;
        return 0;
    }
    if (strlen(av.c_str()) >= 3 && is_operator(av[1]))
    {
        std::cout<<"Error : Your input contains an operator symbol in the wrong place"<<std::endl;
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
    if (op >= digits || op !=  digits - 1)
    {
        std::cout<<"Error : your input isn't valid"<<std::endl;
        return 0;
    }
    return 1;
}

int Rpn::result(int num1,int num2,char op)
{
    if (op == '+')
        return num1 + num2;
    if (op == '-')
        return num1 - num2;
    if (op == '*')
        return num1 * num2;
    else
    {
        if (num2 == 0)
            throw(std::invalid_argument("You can't divide by 0")); 
        return num1 / num2;
    }
}

void Rpn::calculator(std::string str)
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
            if (nums.size() < 2)
                throw std::invalid_argument("Your arguments are invalid");
            num2 = nums.top();
            nums.pop();
            num1 = nums.top();
            nums.pop();
            nums.push(result(num1,num2,*it));
        }
    }
    std::cout<<"result = "<<nums.top();
}

Rpn::~Rpn(){

}
Rpn::Rpn(const Rpn &obj){
    (void)obj;
}
Rpn Rpn::operator=(const Rpn &obj){
    (void)obj;
    return *this;
}