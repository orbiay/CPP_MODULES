/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:50:35 by orbiay            #+#    #+#             */
/*   Updated: 2022/08/26 16:41:51 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	std :: string type;
public:
	Weapon();
	~Weapon();
	Weapon(std :: string name);
	const std :: string& getType(void);
	void setType(std :: string new_Type);
};
#endif