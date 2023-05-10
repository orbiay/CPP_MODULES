#include"PmergeMe.hpp"

void display(char **av)
{
    int i = 1;
    std::cout<<"Before : ";
    while (av[i])
    {
        std::cout<<av[i]<<" ";
        if (i == 4)
        {
            std::cout<<" [...]";
            break;
        }
        i++;
    }
    std::cout<<std::endl;
}
int main (int ac, char **av)
{
    if (ac > 2)
    {

        PmergeMe obj;
        if (obj.check_errors(av))
        {
            display(av);
            obj.using_vector(av);
            obj.using_deque(av);
            std::cout<<"Time to process a range of 5 elements with std::vector : "<<obj.vector<<" us."<<std::endl;
            std::cout<<"Time to process a range of 5 elements with std::deque : "<<obj.deque<<" us."<<std::endl;
        }
    }
}