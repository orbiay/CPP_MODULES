#include"Brain.hpp"
Brain::Brain(){
    std::cout<<"Brain Def Constructor Called"<<std::endl;
}

Brain::~Brain(){
    std::cout<<"Brain Distructor Called"<<std::endl;
}

Brain::Brain(const Brain& obj){
    for(int i = 0;i < 100;i++)
        this->ideas[i] = obj.ideas[i];
    std::cout<<"Brain Copy Constructor Called"<<std::endl;
}

Brain& Brain::operator=(const Brain& obj){
    for(int i = 0;i < 100;i++)
        this->ideas[i] = obj.ideas[i];
    std::cout<<"Brain Copy Assnigment Constructor Called"<<std::endl;
    return *this;
}