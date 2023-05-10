#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include<iostream>
#include<vector>
#include<deque>
#include <sys/time.h>

class PmergeMe
{
    public:
        long vector;
        long deque;
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
        /********************************/
        void using_deque(char **av);
        void sort_first(std::deque<std::pair<int,int> >  &pairs);
        void insert_and_sort(std::deque<int> &s,std::deque<std::pair<int,int> > &pairs);
};

#endif