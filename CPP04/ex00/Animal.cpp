#include "Animal.hpp"

Animal::Animal(){
    type = "No Animal";
    std::cout<<"Animal Default Constructor "<< std::endl;
}

Animal::~Animal(){
    std::cout<<"Animal distructor "<< std::endl;
}
Animal::Animal(const Animal& obj){
    this->type = obj.type;
    std::cout <<"Animal Copy Constructor Called"<< std::endl;
}
Animal& Animal::operator=(const Animal& obj){
    this->type = obj.type;
    std::cout <<"Animal Copy Assingment Constructor Called"<< std::endl;
    return *this;
}
void Animal::makeSound()const{
    std::cout<< type <<" = No Sound" << std::endl; 
}
std::string Animal::getType()const{
    return type;
}