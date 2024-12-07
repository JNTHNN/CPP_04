/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:49 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 12:54:54 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int	main(void)
{
    std::cout << "=== Individual Tests ===" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Deleting dog and cat:" << std::endl;
    delete dog;
    delete cat;

    std::cout << "\n=== Array of Animals ===" << std::endl;
    const int animalCount = 10;
    Animal* animals[animalCount];

    // Half Dogs, Half Cats
    for (int i = 0; i < animalCount / 2; ++i)
        animals[i] = new Dog();
    for (int i = animalCount / 2; i < animalCount; ++i)
        animals[i] = new Cat();
	for (int i = 0; i < animalCount; i++)
		std::cout << "c'est qui ? : " << animals[i]->getType() << std::endl;

    // Deleting all animals
    for (int i = 0; i < animalCount; i++)
        delete animals[i];

    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->setIdea(5, "Original idea");

    Dog copiedDog = originalDog;
    copiedDog.getBrain()->setIdea(5, "Modified idea");

    std::cout << "Original Dog Brain[5]: " << originalDog.getBrain()->getIdea(5) << std::endl;
    std::cout << "Copied Dog Brain[5]: " << copiedDog.getBrain()->getIdea(5) << std::endl;

    std::cout << "\n=== Program End ===" << std::endl;
    return 0;
}
