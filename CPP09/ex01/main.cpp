#include"RPN.hpp"


int main(int ac, char **av)
{
    if (ac == 2)
    {
        try{
            Rpn obj;
            if (obj.check_errors(av[1]))
            {
                obj.calculator(av[1]);
            }
        }
        catch(std::exception &e)
        {
            std::cout<<e.what()<<std::endl;
        }
    }
}