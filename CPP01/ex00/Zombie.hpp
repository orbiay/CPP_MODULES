/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:03:44 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/20 11:39:28 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
class Zombie{
	std :: string name;
public:
	Zombie();
	~Zombie();
	void announce( void );
	void randomChump( std::string name );
	Zombie* newZombie( std::string name );
};
#endif
