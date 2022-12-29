#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include<iostream>
#include<exception>
#include"Form.hpp"
class Form;
class Bureaucrat {
    std::string const name;
    int grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string name,int grade);
    void increment();
    void decrement();
    std::string getName(void) const;
    int getGrade(void) const;
    class GradeTooHighException : public std::exception{
      public:
          const char* what() const throw(){
            return "Grade to High";
          }  
    };
    class GradeTooLowException : public std::exception{
      public:
        const char* what() const throw(){
            return "Grade to Low";
          }  
    };
    void signForm(const Form& obj);
};
std::ostream& operator<<(std::ostream& o,const Bureaucrat& obj);
#endif
//im siling