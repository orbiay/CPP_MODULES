#ifndef CAST_HPP
#define CAST_HPP
#include<iostream>
class Base 
{
public:
    virtual ~Base(){}
    void print()
    {
       std::cout<<"Base";
    }
};

class A : public Base{
public:
    A(){}
    ~A(){}
    void print()
    {
        std::cout<<"The class is"<<" A"<<std::endl;
    }
};
class B : public Base{
public:
    B(){}
    ~B(){}
     void print()
    {
        std::cout<<"The class is"<<" B"<<std::endl;
    }
};
class C : public Base{
public:
    C(){}
    ~C(){}
     void print()
    {
        std::cout<<"The class is" <<" C"<<std::endl;
    }
};
Base *generate(void);
void identify(Base* p);
#endif