/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 12:41:17 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 14:52:53 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Materia")
{

}

AMateria::AMateria(std::string const & type) : type(type)
{
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria * says hello to " << target.getName() << "' *" << std::endl;
}