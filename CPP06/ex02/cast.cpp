#include"cast.hpp"
#include<time.h>
#include <stdlib.h>
Base *generate(void){
    Base *obj;
    srand(time(0));
    int num = rand();
    num = num % 3;
    switch (num)
    {
        case 0:
        {
            obj = new A();
            break;
        }
        case 1:
        {
            obj = new  B();
            break; 
        }
        case 2:
        {
            obj = new C();
            break;
        }
    }
    return (obj);
}

void identify(Base* p)
{
    A *a;
    B *bg;
    C *c;
    a = dynamic_cast<A*>(p);
    bg = dynamic_cast<B*>(p);
    c = dynamic_cast<C*>(p);
    if (a != nullptr)
        std::cout<<"A"<< std::endl;
    if (c != nullptr)
        std::cout<<"C"<< std::endl;
    if (bg != nullptr)
        std::cout<<"B"<< std::endl;
}

void identify(Base& p)
{
    int i = 0;
    int j = 0;
    int h = 0;
   try
   {
        A& a = dynamic_cast<A&>(p);
        (void)a;
   }
   catch(const std::exception& e)
   {
        i++; 
   }
   try
   {
        B& b = dynamic_cast<B&>(p);
        (void)b;
   }
   catch(const std::exception& e)
   {
        j++;
   }
   try
   {
        C& c = dynamic_cast<C&>(p);
        (void)c;
   }
   catch(const std::exception& e)
   {
        h++;
   }
   if (!i) std::cout<<"A"<<std::endl;
    if (!j) std::cout<<"B"<<std::endl;
    if (!h) std::cout<<"C"<<std::endl;
}
int main ()
{
    Base* b =generate();
    identify(b);
    identify(*b);
}