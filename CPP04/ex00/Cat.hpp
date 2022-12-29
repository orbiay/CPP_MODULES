#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include<iostream>
class Cat : public Animal{
    public:
        Cat();
        ~Cat();
        void makeSound()const;
       Cat(const Cat& obj);
       Cat& operator=(const Cat& obj);
};

#endif