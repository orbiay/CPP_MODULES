/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:57:02 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/03 14:53:45 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    std ::string s = "ousama";
    ClapTrap clap(s);
    ClapTrap clap2;
    clap2 = clap;
    clap2.attack("Staff");
    clap2.takeDamage(10);
    clap2.beRepaired(20);

    return EXIT_SUCCESS;
}

