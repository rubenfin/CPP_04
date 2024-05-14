/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 12:44:50 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 14:57:39 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "AMateria.hpp"
#include <string>
#include <iostream>

class AMateria;

class ICharacter
{
  public:
	virtual ~ICharacter()
	{
	}
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};