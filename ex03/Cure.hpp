/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 12:51:49 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/14 15:01:25 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
    Cure(void);
    Cure(const std::string& name);
    ~Cure();

    AMateria *clone(void) const;
    void use(ICharacter& target);
};

