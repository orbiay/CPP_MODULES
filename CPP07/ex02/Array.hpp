#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
template <typename T>
class Array{
    T* array;
    unsigned int length;
public:

    Array(){
        length = 0;
        array = NULL;
    }

    Array(unsigned int n)
    {
        length = n;
        array = new T[n]();
        std::cout<<"parameterized constructor Called"<< std::endl;
    }

    unsigned int size() const
    {
        return (length);
    }

    Array(const Array &obj)
    {
        length = obj.size();
        array = new T[length]();
        for (unsigned int i = 0; i < length ;i++)
            array[i] = obj.array[i];
        std::cout<<"Copy constructor Called"<< std::endl;
    }

    Array& operator=(const Array &obj)
    {
        length = obj.size();
        if (array)
            delete [] array;
        array = new T[length];
        for (int i = 0; i < length ;i++)
            array[i] = obj.array[i];
        std::cout<<"Copy Assingment constructor Called"<< std::endl;
        return *this;
    }

    T& operator[](unsigned int index)
    {
        if (index > length - 1)
            throw std::overflow_error("Invalid Argument");
        return (array[index]);
    }

    ~Array(){
        if (array)
            delete [] array;
        std::cout<<"Destructor Called"<< std::endl;
    }
};

#endif