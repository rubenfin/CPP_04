/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:47:35 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/01 17:02:07 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type)
{
    this->type = type;
}

Animal::~Animal()
{
}
