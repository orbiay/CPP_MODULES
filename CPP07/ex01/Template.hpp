#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
template <typename T>
void iter(const T *add, int length,void (*ptr_func)(const T&))
{
    int i = 0;
    while (i < length)
    {
        ptr_func(add[i]);
        i++;
    }
}

template <typename T>

void func(const T& d)
{
    std::cout<< d++ << std::endl;
}
#endif