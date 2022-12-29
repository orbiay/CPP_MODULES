#include"RobotomyRequestForm.hpp"
#include"Form.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robot..,",0,72,45),target("No value"){
};

RobotomyRequestForm::~RobotomyRequestForm(){

};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robot..",0,72,45) ,target(target){

};

std::string RobotomyRequestForm::getTarget(){
    return target;
}
void RobotomyRequestForm::Func()const{
    int i;
    srand(time(0));
    i = rand() % 2 + 1;
    if(i % 2 == 0)
        std:: cout <<target << " has been robotomized successfully."<< std::endl;
    else
        std::cout<< "the robotomy failed" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & obj) const{
    if(getIs_sign() == true && obj.getGrade() <= getGrade_to_exec() && obj.getGrade() <= getGrade_to_sign())
        Func();
    else 
        throw(Form::GradeTooLowException());
}