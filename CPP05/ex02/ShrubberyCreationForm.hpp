#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include"Form.hpp"
#include<iostream>
#include<fstream>
class ShrubberyCreationForm : public Form {
    std::string const target;
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    void tree_ascii()const;
    std::string getTarget()const;
    void execute(Bureaucrat const & obj) const;
};
#endif