#include"Animal.hpp"
#include"Dog.hpp"
#include "Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const WrongAnimal* j = new WrongCat();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

return 0;
}

// This is because even though ptr points to a Derived object, it is actually of Base type. So, it calls the member function of Base.
//fach taykoun 3andi Pionter dayl Base class kaypointy 3la derived class omakaynach l Virtual , o3ayette lchi meythod nefs smia kayna fl base o derived ,kat t3ayet liya dyal lbase class 7itach kaychof type dyal lpointer  