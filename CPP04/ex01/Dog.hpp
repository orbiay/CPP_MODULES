#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include<iostream>
#include"Brain.hpp"
class Dog : public Animal{
    Brain* brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        void makeSound()const;
};

#endif