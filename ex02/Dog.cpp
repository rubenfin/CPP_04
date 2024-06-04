/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:38 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/31 13:27:39 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog::makeSound(void) const
{
	std::cout << GREEN "woof woof!" RESET << std::endl;
}

Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << GREEN "Dog constructor called!" RESET << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << GREEN "Dog copy constructor called!" RESET << std::endl;
    this->type = other.type;
    this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << GREEN "Dog copy assignment operator called!" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << GREEN "Dog destructor called!" RESET << std::endl;
	delete this->brain;
}