#ifndef INTERN_HPP
#define INTERN_HPP
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"
#include"Form.hpp"
#include<iostream>
class Intern{
public:
    Intern();
    ~Intern();
    Form* makeForm(const std::string& name_Form , const std::string& target);
};
#endif