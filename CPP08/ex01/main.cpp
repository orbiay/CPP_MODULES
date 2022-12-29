#include"span.hpp"

int main()
{
    {
        Span sp = Span(5);
        sp.addNumber(6);//3
        sp.addNumber(3);//6
        sp.addNumber(11);//9
        sp.addNumber(10);//11
        sp.addNumber(11);//17
        std::cout <<"shortesSpan : " <<sp.shortestSpan() << std::endl;
        std::cout << "longestSpan : " <<sp.longestSpan() << std::endl;
    }
    {
        try
        {
            Span sp(MAX_VAL);
            sp.random_num();
            std::cout <<"shortesSpan : " <<sp.shortestSpan() << std::endl;
            std::cout << "longestSpan : " <<sp.longestSpan() << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout<<e.what();
        }
    }
    return 0;
}