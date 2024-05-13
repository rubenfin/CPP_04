/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:47:35 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 14:28:56 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void Animal::makeSound(void) const
{
    std::cout << RED "some animal sound!" RESET << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Animal::Animal(void) : type("")
{
    std::cout << RED "Animal constructor called!" RESET << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << RED "Animal constructor called!" RESET << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &other)
{
    std::cout << RED "Animal copy constructor called!" RESET << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << RED "Animal copy asignment operator called!" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
    std::cout << RED "Animal destructor called!" RESET << std::endl;
}
