/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:31 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 15:02:52 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound(void) const
{
	std::cout << BLUE "meow meow!" RESET << std::endl;
}

Cat::Cat(void) : Animal("Cat")
{
	std::cout << BLUE "Cat constructor called!" RESET << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << BLUE "Cat copy constructor called!" RESET << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << BLUE "Cat copy assignment operator called!" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << BLUE "Cat destructor called!" RESET << std::endl;
	delete this->brain;
}