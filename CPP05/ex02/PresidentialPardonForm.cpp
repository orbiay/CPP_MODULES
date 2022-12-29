#include"PresidentialPardonForm.hpp"
#include"Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Pre..",0,25,5){
}

PresidentialPardonForm::~PresidentialPardonForm(){

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Pre...",0,25,5),target(target){

}

std::string PresidentialPardonForm::getTarget(){
    return(target);
}

void PresidentialPardonForm::ppf() const{
    
    std::cout<<"Informs that "<<target<<" has been pardoned by Zaphod Beeblebrox."<<std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& obj) const{
    if(getIs_sign() == true && obj.getGrade() <= getGrade_to_exec() && obj.getGrade() <= getGrade_to_sign())
       ppf();
    else
        throw(Form::GradeTooLowException());
}