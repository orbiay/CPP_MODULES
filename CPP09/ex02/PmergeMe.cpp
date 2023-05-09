#include"PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}
int PmergeMe::counter(char **av)
{
    int i = 0;
    while (av[i])
        i++;
    return i - 1;
}

bool compare_pair(std::pair<int, int>& a,std::pair<int, int>& b) {
    return a.first < b.first;
}

void PmergeMe::sort_first(std::vector<std::pair<int,int> >  &pairs)
{
    std::sort(pairs.begin(),pairs.end(), compare_pair);
}

void PmergeMe::insert_and_sort(std::vector<int> &s,std::vector<std::pair<int,int> > &pairs)
{
    for (std::vector<std::pair<int,int> >::iterator iter = pairs.begin() ;iter != pairs.end();iter++)
        s.push_back(iter->first);
    for (std::vector<std::pair<int,int> >::iterator iter = pairs.begin() ;iter != pairs.end();iter++)
    {
        std::vector<int>::iterator it = std::lower_bound(s.begin(), s.end(), iter->second);
        s.insert(it, iter->second);
    }
}

void PmergeMe::using_vector(char **av)
{
    std::vector<std::pair<int,int> > pairs;
    int temp = 0;
    int i = 1;
    while (av[i] && av[i + 1])
    {
        pairs.push_back(std::make_pair(std::atoi(av[i]),std::atoi(av[i + 1])));
        i+=2;
    }
    sort_first(pairs);
    if (counter(av) % 2 != 0)
        temp = std::atoi(av[counter(av)]);
    std::vector<int> s;
    insert_and_sort(s,pairs);
    if (counter(av) % 2 != 0)
    {
        std::vector<int>::iterator it = std::lower_bound(s.begin(), s.end(), temp);
        s.insert(it, temp);
    }
    for (std::vector<int>::iterator it = s.begin();it != s.end();it++)
        std::cout<<*it<<" ";
}

int PmergeMe::ft_isdigit(char *av)
{
    int i = 0;
    while (av[i])
    {
        if (!isdigit(av[i]))
            return 0;
        i++;
    }
    return 1;
}

int PmergeMe::check_errors(char **av)
{
    int i = 1;
    while (av[i])
    {
        if (!ft_isdigit(av[i]))
            return 0;
        i++;
    }
    return 1;
}
PmergeMe::PmergeMe::~PmergeMe()
{
}
PmergeMe::PmergeMe(const PmergeMe &obj){
    (void)obj;
}
PmergeMe PmergeMe::operator=(const PmergeMe &obj){
    (void)obj;
    return *this;
}