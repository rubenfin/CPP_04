/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:36 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 14:24:38 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
  public:
	Cat(void);
	Cat(const Cat &other);
	Cat &operator=(const Cat &copy);
	~Cat();

	void makeSound(void) const;
};
