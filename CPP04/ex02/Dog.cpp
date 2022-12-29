#include"Dog.hpp"
Dog::Dog(){
     type = "Dog";
     brain = new Brain();
     std::cout<<"Dog Default Constructor "<< std::endl;
}

Dog::~Dog(){
     delete brain;
     std::cout<<"Dog distructor "<< std::endl;
}

void Dog::makeSound()const{
    std::cout<< type <<" = Bark" << std::endl; 
}

Dog::Dog(const Dog& obj){
     type = obj.type;
     brain = new Brain();
     (*brain) = (*obj.brain);
     std::cout<<"Copy Constructor Called"<<std::endl;
}

Dog& Dog::operator=(const Dog& obj){
     type = obj.type;
     //brain = new Brain();
     (*brain) = (*obj.brain);
     std::cout<<"Copy Assingment Constructor Called"<<std::endl;
     return *this;
}