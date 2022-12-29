/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:57:02 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/24 10:24:58 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include"ScavTrap.hpp"
int main( void )
{
    std ::string s = "oussama";
    ClapTrap Obj2(s);
    ScavTrap obj(s);
    Obj2.attack("u");
    obj.attack("staff");
    obj.takeDamage(15);
    obj.beRepaired(30);
    obj.attack("staff");
    obj.guardGate();
    return EXIT_SUCCESS;
}

