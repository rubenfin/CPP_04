/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:59:38 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/02 15:00:17 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
}
Dog & Dog::operator=(const Dog& copy) : Animal("Dog")
{
    return(*this);
}


Dog::~Dog()
{
}