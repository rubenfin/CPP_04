/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:46:31 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/31 13:25:07 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	AAnimal *array[10];

	// const AAnimal *meta = new AAnimal();
	const AAnimal *j = new Dog();
	const AAnimal *i = new Cat();

	std::cout << PINK "\n----------GetType----------" RESET << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << PINK "\n----------MakeSound----------" RESET << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();

	std::cout << std::endl;
	// delete meta;
	delete j;
	delete i;

	for (int i = 0; i < 5; ++i)
		array[i] = new Dog();
	for (int i = 5; i < 10; ++i)
		array[i] = new Cat();

	for (int i = 0; i < 10; ++i)
		delete array[i];

	return (0);
}