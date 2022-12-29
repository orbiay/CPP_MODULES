#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM
#include"Form.hpp"
#include<iostream>
class RobotomyRequestForm : public Form{
    std::string const target;
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    std::string getTarget();
    void Func()const;
    void execute(Bureaucrat const & obj) const;
};
#endif