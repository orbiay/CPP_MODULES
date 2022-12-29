/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:08:07 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/19 16:59:13 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main ()
{
	Zombie *zombie_test = NULL;
	zombie_test->randomChump("Zeeks");
	zombie_test = zombie_test->newZombie("Oussama");
	zombie_test->announce();
	delete  zombie_test;
}