/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:00:57 by orbiay            #+#    #+#             */
/*   Updated: 2022/09/06 16:17:18 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include"WrongAnimal.hpp"
class WrongCat : public WrongAnimal{
public:
    WrongCat();
    ~WrongCat();
    void makeSound() const;
};
#endif