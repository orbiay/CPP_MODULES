/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:21:36 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/29 12:01:53 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"
int main()
{
    /*** try for sign contract ******/
     try{
        Bureaucrat obj("oussama",12);
        Form form("contract",0,10,2);
         std::cout<<obj<< std::endl;
         std::cout<<form<<std::endl;
         form.beSigned(obj);
         std::cout<<form<<std::endl;
         obj.signForm(form);
     }
    /*** try for couldn't sign contract ******/
    //try{
    //    Bureaucrat obj("oussama",122);
    //    Form form("contract",0,10,2);
    //    std::cout<<obj<< std::endl;
    //    std::cout<<form<<std::endl;
    //    form.beSigned(obj);
    //    std::cout<<form<<std::endl;
    //    obj.signForm(form);
    //}
    catch(std::exception& e)
    {
        std::cout << e.what();
    }
}