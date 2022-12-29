/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 12:51:27 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/19 19:06:40 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::debug(void)
{
	std :: cout <<	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std :: endl;
}

void Harl::info(void)
{
	std :: cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std :: endl;
}

void Harl::warning(void)
{
	std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std :: endl;
}

void Harl::error(void)
{
	std :: cout << "This is unacceptable! I want to speak to the manager now." << std :: endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*ptrfunc[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error} ;

	int i = 0;
	std :: string arr[4] = {"DEBUG","INFO","WARNING","ERROR"};

	while(i < 4)
	{
		if(level == arr[i]){
			(this->*ptrfunc[i])();
			return ;
		}
			//i need to search about this pointer
		i++;
	}
	std :: cout << "Sorry there isn't any name level like this: " << std :: endl;
}