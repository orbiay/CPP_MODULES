#include"Bureaucrat.hpp"
#include"Form.hpp"
Bureaucrat::Bureaucrat(){

}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat::Bureaucrat(std::string name,int grade) : name(name),grade(grade){
    if(grade > 150)
        throw(Bureaucrat::GradeTooLowException());
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
    o <<obj.getName() <<" ,bureaucrat grade " <<obj.getGrade()<< std::endl;
    return(o);
}

void Bureaucrat::signForm(const Form& obj){
    if(obj.getIs_sign() == true)
        std::cout<<name<< " is signed " << obj.getName()<< std::endl;
    else
        std::cout<<name << " couldn't sign " << obj.getName() << " cuz " << " Buraeucrat Grade is low than Form Grade"<< std::endl;
}

void Bureaucrat::executeForm(Form const & form){
     try
     {
        form.execute( *this );
     }
     catch(const std::exception& e)
     {
        std::cout << name << " couldn't execute the " << form.getName()<< std::endl;
     }
     //std::cout<< name << " execute the "<< form.getName()<< std::endl;
     
}