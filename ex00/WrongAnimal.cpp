/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:47:35 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 14:38:04 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void WrongAnimal::makeSound(void) const
{
    std::cout << YELLOW "some WrongAnimal sound!" RESET << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

WrongAnimal::WrongAnimal(void) : type("")
{
    std::cout << YELLOW "WrongAnimal constructor called!" RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << YELLOW "WrongAnimal constructor called!" RESET << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << YELLOW "WrongAnimal copy constructor called!" RESET << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << YELLOW "WrongAnimal copy asignment operator called!" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << YELLOW "WrongAnimal destructor called!" RESET << std::endl;
}
