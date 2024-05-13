/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:36 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 15:14:04 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
	Brain *brain;

  public:
	Cat(void);
	Cat(const Cat &other);
	Cat &operator=(const Cat &copy);
	~Cat();

	void makeSound(void) const;
};
