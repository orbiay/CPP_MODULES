#ifndef FORM_HPP
#define FORM_HPP
#include"Bureaucrat.hpp"
#include<iostream>
class Bureaucrat;
class Form{
    std::string const name;
    bool              is_sign;
    int const         grade_to_sign;
    int const             grade_to_exec;
protected:
    int                 if_exec;
public:
    class GradeTooHighException : public std::exception{
        public:
        const char* what() const throw(){
            return "Grade To High";
        }
    };
    class GradeTooLowException : public std::exception{
        public:
        const char* what() const throw(){
            return "Grade To Low";
        }
    };
    Form();
    ~Form();
    Form(std::string name,bool is_sign,int grade_to_sign,int grade_to_exec);
    std::string getName()const;
    bool getIs_sign()const;
    int getGrade_to_sign()const;
    int getGrade_to_exec()const;
    int getIf_exec()const;
    void beSigned(const Bureaucrat& obj);
    virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator<<(std::ostream& o,const Form& obj);
#endif