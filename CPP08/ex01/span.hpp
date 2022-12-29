#ifndef SPAN_HPP
#define SPAN_HPP
#include<vector>
#include<iostream>
#include<algorithm>
#define MAX_VAL 5
class Span{
    unsigned int N;
    std::vector<int> vec;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &obj);
    Span operator=(const Span &obj);
    ~Span();
    void addNumber(const int &num);
    int shortestSpan();
    int longestSpan();
    void random_num();
};
#endif