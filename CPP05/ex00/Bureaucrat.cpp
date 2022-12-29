#include"Bureaucrat.hpp"
Bureaucrat::Bureaucrat(){

}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(std::string name,int grade) : name(name),grade(grade){
    if(grade > 150)
        throw( Bureaucrat::GradeTooLowException());
    if (grade < 1)
        throw(Bureaucrat::GradeTooHighException());
}

void Bureaucrat::increment(){
    if(grade - 1 < 1)
        throw(Bureaucrat::GradeTooHighException());
    grade--;
}

void Bureaucrat::decrement(){
    if(grade + 1 > 150)
        throw(Bureaucrat::GradeTooLowException());
    grade++;
}

std::string Bureaucrat::getName(void) const{
    return(name);
}

int Bureaucrat::getGrade(void) const{
    return(grade);
}

std::ostream& operator<<(std::ostream& o,const Bureaucrat& obj){
    o << obj.getName() <<" ,bureaucrat grade " <<obj.getGrade()<< std::endl;
    return(o);
}
