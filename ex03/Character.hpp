/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 12:46:47 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 14:58:17 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character : public ICharacter
{
  private:
	std::string _name;
	AMateria *_inventory[4];

  public:
	Character();
	Character(const std::string &name);
	~Character();

	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};
