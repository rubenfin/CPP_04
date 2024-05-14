/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 13:09:44 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 14:53:17 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *_materias[4];

  public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const &type);
};
