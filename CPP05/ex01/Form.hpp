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
    Form(const Form& obj);
    Form& operator=(const Form& obj);
    std::string getName()const;
    bool getIs_sign()const;
    int getGrade_to_sign()const;
    int getGrade_to_exec()const;
    void beSigned(const Bureaucrat& obj);
};
std::ostream& operator<<(std::ostream& o,const Form& obj);
#endif