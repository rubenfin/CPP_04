/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 12:46:38 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 16:58:21 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (_inventory[i]) 
            delete _inventory[i];
}

const std::string &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "No empty spot in inventory left!" << std::endl;
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Slot is out of bounds!" << std::endl;
        return;
	}
	if (this->_inventory[idx] != nullptr)
		this->_inventory[idx] = nullptr;
	else
		std::cout << "You tried unequiping an empty slot!" << std::endl;
}
void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Slot is out of bounds!" << std::endl;
        return;
	}
	if (this->_inventory[idx] != nullptr)
		this->_inventory[idx]->use(target);
	else
		std::cout << "tried using an empty slot!" << std::endl;
}