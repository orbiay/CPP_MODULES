#include"PmergeMe.hpp"


int main (int ac, char **av)
{
    if (ac > 2)
    {
        PmergeMe obj;
        if (obj.check_errors(av))
            obj.using_vector(av);
    }
}