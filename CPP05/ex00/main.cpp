/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:21:36 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/29 11:53:37 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
int main()
{
    try{//try: Represents a block of code that can throw an exception.
        //obj.getGrade();
        Bureaucrat obj("oussama",1);
        std::cout << obj;
        obj.decrement();
        std::cout << obj;
        obj.increment();
        std::cout << obj;
        obj.decrement();
        std::cout << obj;
        obj.increment();
        std::cout << obj;
        obj.increment();
        std::cout << obj;
    }catch(std::exception& e)//Represents a block of code that is executed when a particular exception is thrown
    {
        std::cout << e.what();
    }
    //!throw : Used to throw an exception.
}