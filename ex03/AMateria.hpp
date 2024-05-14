/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 12:38:03 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 14:57:07 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
    protected:
    std::string type;
    
    public:
    AMateria();
    AMateria(std::string const & type);
    virtual ~AMateria() {}
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};