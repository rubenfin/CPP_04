/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:46:31 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 16:46:23 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal *array[10];

	for (int i = 0; i < 5; ++i)
		array[i] = new Dog();
	for (int i = 5; i < 10; ++i)
		array[i] = new Cat();

	for (int i = 0; i < 10; ++i)
		delete array[i];

	return (0);
}