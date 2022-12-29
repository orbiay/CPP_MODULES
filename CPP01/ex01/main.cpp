/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:08:07 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/19 10:58:08 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main ()
{
	Zombie *zombie_test = NULL;
	zombie_test = zombie_test->zombieHorde(10,"Oussama");
	int i = 0;
	while (i < 10)
	{
		std :: cout << i<< std::endl;
		zombie_test[i].announce();
		std :: cout << "\n";
		i++;
	}
	delete [] zombie_test;
}