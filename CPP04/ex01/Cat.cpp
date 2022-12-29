#include"Cat.hpp"

Cat::Cat(){
    type = "Cat";
    brain = new Brain();
     std::cout<<"Cat Default Constructor "<< std::endl;
}

Cat::~Cat(){
    delete brain;
    std::cout<<"Cat distructor "<< std::endl;
}

void Cat::makeSound()const{
    std::cout<< type <<" = meaw" << std::endl; 
}

Cat::Cat(const Cat& obj){
    type = obj.type;
    brain = new Brain();
    (*brain) = (*obj.brain);
    std::cout<<"Copy Constructor Called"<<std::endl;
}

Cat& Cat::operator=(const Cat& obj){
    type = obj.type;
    //brain = new Brain();
    (*brain) = (*brain);
    std::cout<<"Copy Assignment Constructor"<<std::endl;
    return *this;
}