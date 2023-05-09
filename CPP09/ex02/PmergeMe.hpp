#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include<iostream>
#include<vector>
class PmergeMe
{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &obj);
        PmergeMe operator=(const PmergeMe &obj);
        int counter(char **av);
        void sort_first(std::vector<std::pair<int,int> >  &pairs);
        void insert_and_sort(std::vector<int> &s,std::vector<std::pair<int,int> > &pairs);
        void using_vector(char **av);
        int ft_isdigit(char *av);
        int check_errors(char **av);
};

bool compare_pair(std::pair<int, int>& a,std::pair<int, int>& b);

#endif