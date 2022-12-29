#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include<iostream>
#include"Brain.hpp"
class Cat : public Animal{
    Brain* brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        void makeSound()const;
       //Cat(const Cat& obj);
       //Cat& operator=(const Cat& obj);
};

#endif