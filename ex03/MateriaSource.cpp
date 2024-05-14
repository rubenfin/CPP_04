/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 13:09:38 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 16:57:20 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
	// std::cout << "MateriaSource: default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materias[i] != nullptr)
			delete this->_materias[i];
    }
	// std::cout << "MateriaSource: default constructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == nullptr)
		{
			this->_materias[i] = materia;
            return;
        }
	}
    
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == _materias[i]->getType())
			return (_materias[i]->clone());
	}
	return (nullptr);
}