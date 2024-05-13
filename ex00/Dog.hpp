/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:41 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 13:38:40 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
  public:
	Dog(void);
	Dog(const Dog &other);
	Dog &operator=(const Dog &copy);
	~Dog();

	void makeSound(void) const;
};
