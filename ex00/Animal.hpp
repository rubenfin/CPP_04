/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:47:37 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/01 16:57:36 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal::Animal(std::string type);
        ~Animal();
};
