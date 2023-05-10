#include"PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    vector = 0;
    deque = 0;
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
    struct timeval start_time; 
    struct timeval end_time;
    gettimeofday(&start_time,NULL);
    long st = (start_time.tv_sec / 1000000) + start_time.tv_usec;
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
    gettimeofday(&end_time,NULL);
    vector = ((end_time.tv_sec / 1000000 )+ end_time.tv_usec) - st;
    std::cout<<"after:\nvector: ";
    i =0;
    for (std::vector<int>::iterator it = s.begin();it != s.end();it++,i++)
    {
        std::cout<<*it<<" ";
        if (i == 4)
        {
            std::cout<<" [...]";
            break;
        }
    }
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
/*************************************/

void PmergeMe::insert_and_sort(std::deque<int> &s,std::deque<std::pair<int,int> > &pairs)
{
    for (std::deque<std::pair<int,int> >::iterator iter = pairs.begin() ;iter != pairs.end();iter++)
        s.push_back(iter->first);
    for (std::deque<std::pair<int,int> >::iterator iter = pairs.begin() ;iter != pairs.end();iter++)
    {
        std::deque<int>::iterator it = std::lower_bound(s.begin(), s.end(), iter->second);
        s.insert(it, iter->second);
    }
}

void PmergeMe::using_deque(char **av){

    std::deque<std::pair<int,int> > pairs;
    int temp = 0;
    int i = 1;
    struct timeval start_time; 
    struct timeval end_time;
    gettimeofday(&start_time,NULL);
    long st = (start_time.tv_sec / 1000000) + start_time.tv_usec;
    while (av[i] && av[i + 1])
    {
        pairs.push_back(std::make_pair(std::atoi(av[i]),std::atoi(av[i + 1])));
        i+=2;
    }
    sort_first(pairs);
    if (counter(av) % 2 != 0)
        temp = std::atoi(av[counter(av)]);
    std::deque<int> s;
    insert_and_sort(s,pairs);
    if (counter(av) % 2 != 0)
    {
        std::deque<int>::iterator it = std::lower_bound(s.begin(), s.end(), temp);
        s.insert(it, temp);
    }
    gettimeofday(&end_time,NULL);
    deque = ((end_time.tv_sec / 1000000 )+ end_time.tv_usec) - st;
    std::cout<<"\ndeque: ";
    i = 0;
    for (std::deque<int>::iterator it = s.begin();it != s.end();it++,i++)
    {
        std::cout<<*it<<" ";
        if (i == 4)
        {
            std::cout<<" [...]";
            break;
        }
    }
    std::cout<<std::endl;
}

void PmergeMe::sort_first(std::deque<std::pair<int,int> >  &pairs)
{
    std::sort(pairs.begin(),pairs.end(), compare_pair);
}

PmergeMe::PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &obj){
    vector = obj.vector;
    deque = obj.deque;
}

PmergeMe PmergeMe::operator=(const PmergeMe &obj){
    vector = obj.vector;
    deque = obj.deque;
    return *this;
}
