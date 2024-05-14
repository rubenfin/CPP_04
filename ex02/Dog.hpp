/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:41 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 11:50:41 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
  private:
	Brain *brain;

  public:
	Dog(void);
	Dog(const Dog &other);
	Dog &operator=(const Dog &copy);
	~Dog();

	void makeSound(void) const;
};
