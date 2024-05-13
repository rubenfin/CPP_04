/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/13 14:53:10 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 15:09:23 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called!"  << std::endl;
}


Brain::Brain(const Brain &other)
{
    std::cout <<  "Brain copy constructor called!"  << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout <<  "Brain copy assignment operator called!"  << std::endl;
	if (this != &other)
	{
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!"  << std::endl;
}