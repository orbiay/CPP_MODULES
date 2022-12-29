/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:21:36 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/29 12:36:09 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include"Intern.hpp"
#include "Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
 try {
            Intern obj;
            Bureaucrat bureaucrat("Oussama", 43);
            std::string name_form = "robotomy request";
            std::string target = "tree";
            Form*  form2 =  obj.makeForm("roboy request","tree");
            if(form2 == NULL)
            {
                std::cout<<"There is No Form Name like this name -> "<< name_form << std::endl;
                return 1;
            }
             //std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
             //       bureaucrat.executeForm(*form1);
             //       std::cout<<form1->getIs_sign()<<std::endl;
             //       bureaucrat.signForm(*form1);
             //       form1->beSigned(bureaucrat);
             //       std::cout<<form1->getIs_sign()<<std::endl;
             //       bureaucrat.signForm(*form1);
             //       bureaucrat.executeForm(*form1);
             //       form1->beSigned(bureaucrat);
             //       bureaucrat.executeForm(*form1);
            std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
                    bureaucrat.executeForm(*form2);
                    std::cout<<form2->getIs_sign()<<std::endl;
                    form2->beSigned(bureaucrat);
                    std::cout<<form2->getIs_sign()<<std::endl;
                    bureaucrat.executeForm(*form2);
            //std::cout << "\n--------------- Form 3 ( President ) //---------------" << std::endl;
            //        bureaucrat.executeForm(*form3);
            //        std::cout<<form3->getIs_sign()<<std::endl;
            //        form3->beSigned(bureaucrat);
            //        std::cout<<form3->getIs_sign()<<std::endl;
            //        bureaucrat.executeForm(*form3);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        return EXIT_SUCCESS;
}