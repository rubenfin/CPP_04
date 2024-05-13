/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:31 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 14:37:48 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void WrongCat::makeSound(void) const
{
    std::cout << PINK "boo boo!" RESET << std::endl;
}

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << PINK "WrongCat constructor called!" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << PINK "WrongCat copy constructor called!" RESET << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << PINK "WrongCat copy assignment operator called!" RESET << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << PINK "WrongCat destructor called!" RESET << std::endl;
}