/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/13 14:50:01 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 15:11:10 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>
#include <string>

class Brain
{
public:
    std::string ideas[100];
    Brain(void);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
    ~Brain();
};

#endif