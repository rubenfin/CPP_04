/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 16:46:31 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/05/13 14:38:44 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << PINK "\n----------GetType----------" RESET <<std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		
		std::cout << PINK "\n----------MakeSound----------" RESET <<std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << PINK "\n-------------------CheckWrongAnimal---------------------\n" RESET <<std::endl;
		const WrongAnimal*	wrong = new WrongAnimal();
		const WrongAnimal*	wrongcat = new WrongCat();
		
		std::cout << PINK "\n----------GetType----------" RESET <<std::endl;
		std::cout << wrongcat->getType() << " " << std::endl;

		std::cout << PINK "\n----------MakeSound----------" RESET <<std::endl;
		wrong->makeSound();
		wrongcat->makeSound();

		std::cout << std::endl;
		delete wrong;
		delete wrongcat;
	}
	return (0);
}