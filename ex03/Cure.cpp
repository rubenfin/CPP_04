/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 12:52:07 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 15:52:19 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
    this->type = "cure";
}

Cure::Cure(const std::string &name)
{
    (void)name;
    this->type = "cure";
}

Cure::~Cure()
{
}

AMateria *Cure::clone(void) const
{
    AMateria *clone = new Cure("cure");
    return(clone);    
}

void Cure::use(ICharacter &target)
{
	std::cout << "Cure: *heals " << target.getName() << "'s wounds *" << std::endl;
}
