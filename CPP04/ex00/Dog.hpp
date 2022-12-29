#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include<iostream>
class Dog : public Animal{
    public:
        Dog();
        ~Dog();
        void makeSound()const;
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
};

#endif