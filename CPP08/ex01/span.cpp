#include"span.hpp"
Span::Span()
{
    N = 0;
}

Span::Span(unsigned int n)
{
    N = n;
    vec.reserve(N);
}

Span::Span(const Span &obj)
{
    N = obj.N;
    vec = obj.vec;
}

Span Span::operator=(const Span &obj)
{
    N = obj.N;
    vec = obj.vec;
    return (*this);
}

void Span::addNumber(const int &num)
{
    if (vec.size() < N)
        vec.push_back(num);
    else
        throw std::overflow_error("OverFlow_error");
}

int Span::longestSpan(){
    if (vec.size() < 2)
        throw std::overflow_error("You must have at least two argument");
   sort(vec.begin(),vec.end());
    return ((*(vec.end() - 1)) - (*(vec.begin())));
}

int Span::shortestSpan()
{
    if (vec.size() < 2)
        throw std::overflow_error("You must have at least two argument");
    sort(vec.begin(),vec.end());
    int save;
    int save2;
    std::vector<int>::iterator iter = vec.begin();
    std::vector<int>::iterator iter2 = (vec.begin() + 1);
    save2 = *iter2;
    save = *iter;
    for (;iter2 < vec.end();iter++ ,iter2++)
    {
        if (*iter2 - *iter < save2 - save)
        {
            save2 = *iter2;
            save = *iter;
        }
    }
    return (save2 - save);
}

void Span::random_num()
{
    srand(time(0));
    for (int i = 0 ; i < MAX_VAL;i++)
    {
        addNumber(rand());
    }
}

Span::~Span(){

}