/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:17:22 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/19 18:46:58 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
	std :: string str;
	std :: string* stringPTR;
	std :: string& stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = "Helo";
	//////////////////////////////ADDRESS_MEMORY/////////////////////////////////////////
	std :: cout << "********************ADDRESS*****************************" << std :: endl;
	std :: cout << "The memory address of the string variable :\t"<< &str << std :: endl;
	std :: cout << "The memory address held by stringPTR :\t\t"<< stringPTR << std :: endl;
	std :: cout << "The memory address held by stringREF :\t\t"<< &stringREF << std :: endl;
	//////////////////////////////VALUE//////////////////////////////////////////////////
	std :: cout << "\n********************VALUE*****************************" << std :: endl;
	std :: cout << "The value of the string variable :   "<< str << std :: endl;
	std :: cout << "The value pointed to by stringPTR :  "<< *stringPTR << std :: endl;
	std :: cout << "The value pointed to by stringREF :  "<< stringREF << std :: endl;
}