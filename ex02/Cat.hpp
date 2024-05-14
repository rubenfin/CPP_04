/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:36 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 11:50:08 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
