/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 12:51:38 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 15:53:03 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(const std::string &name)
{
    (void)name;
	this->type = "ice";
}

Ice::~Ice()
{
}

AMateria *Ice::clone(void) const
{
	AMateria *clone = new Ice("ice");
	return (clone);
}

void Ice::use(ICharacter &target)
{
	std::cout << "Ice: *shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
