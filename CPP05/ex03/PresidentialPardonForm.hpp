#ifndef PRESIDENTIALPARDONFORM_hpp
#define PRESIDENTIALPARDONFORM_hpp
#include"Form.hpp"
class PresidentialPardonForm : public Form{
    std::string  target;
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    std::string getTarget();
    void execute(const Bureaucrat& obj) const;
    void ppf()const;
};
#endif