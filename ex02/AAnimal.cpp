/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:47:35 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 11:50:59 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

std::string AAnimal::getType(void) const
{
	return (this->type);
}

AAnimal::AAnimal(void) : type("")
{
    std::cout << RED "AAnimal constructor called!" RESET << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    std::cout << RED "AAnimal constructor called!" RESET << std::endl;
	this->type = type;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << RED "AAnimal copy constructor called!" RESET << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << RED "AAnimal copy asignment operator called!" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << RED "AAnimal destructor called!" RESET << std::endl;
}
