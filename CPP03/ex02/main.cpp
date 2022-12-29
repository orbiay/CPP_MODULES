/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:57:02 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/24 09:53:08 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
int main( void )
{
    std ::string s = "oussama";
    std ::string s2 = "ismail";
    FragTrap obj(s);
    ScavTrap obj2(s2);
    obj2.attack("staff");
    obj.takeDamage(15);
    obj.beRepaired(30);
    obj.attack("1223353");
    obj.highFivesGuys();
    return EXIT_SUCCESS;
}

