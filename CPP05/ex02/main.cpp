/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:21:36 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/29 12:20:02 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
 try {
            Bureaucrat bureaucrat("Oussama", 2);
            //Form* form1 = new ShrubberyCreationForm("Shrubbery");
            //Form* form2 = new RobotomyRequestForm("Robotomy");
            Form*  form3 = new PresidentialPardonForm("President");
           // std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
            //        bureaucrat.executeForm(*form1);
            //        std::cout<<form1->getIs_sign()<<std::endl;  
            //        form1->beSigned(bureaucrat);
            //        std::cout<<form1->getIs_sign()<<std::endl;
            //        bureaucrat.executeForm(*form1);
            //        form1->beSigned(bureaucrat);
            //        bureaucrat.executeForm(*form1);
            //std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
            //        bureaucrat.executeForm(*form2);
            //        std::cout<<form2->getIs_sign()<<std::endl;
            //        form2->beSigned(bureaucrat);
            //        std::cout<<form2->getIs_sign()<<std::endl;
            //        bureaucrat.executeForm(*form2);
            std::cout << "\n--------------- Form 3 ( President ) //---------------" << std::endl;
                   bureaucrat.executeForm(*form3);
                   std::cout<<form3->getIs_sign()<<std::endl;
                   form3->beSigned(bureaucrat);
                   std::cout<<form3->getIs_sign()<<std::endl;
                   bureaucrat.executeForm(*form3);
                
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        return EXIT_SUCCESS;
}