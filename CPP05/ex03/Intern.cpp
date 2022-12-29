#include"Intern.hpp"
Intern::Intern(){
    //std::cout<< "Interm Def Constructor Called"<< std::endl;
}

Intern::~Intern(){
    //std::cout<<"Intern Distructor Called"<<std::endl;
}

Form* Intern::makeForm(const std::string& name_Form ,const std::string& target)
{
    int i;
    std::string nameForm[3] = {"robotomy request","shrubbery creation","presidential pardon"};

    for (i = 0;i < 3;i++)
    {
        if (name_Form == nameForm[i])
            break;
    }
    switch (i)
    {
        case 0:
            return new RobotomyRequestForm(target);
        case 1:
            return new ShrubberyCreationForm(target);
        case 2:
            return new PresidentialPardonForm(target);
        default:
            std::cout<<"Error :";

    }
    return (NULL);
}