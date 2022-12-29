/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:10:55 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/24 10:25:55 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include"ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
  FragTrap();
  FragTrap(std::string& name);
  FragTrap(const FragTrap& obj);
  FragTrap& operator=(const FragTrap& obj);
  ~FragTrap(); 
  void highFivesGuys(void);
};
#endif