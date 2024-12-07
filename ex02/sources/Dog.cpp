/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:47 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 13:02:09 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void): AAnimal()
{
    std::cout << "Default constructor called from Dog" << std::endl;
    _type = "Dog";
	_brain = new Brain();
    return;
}

Dog::Dog(const std::string &type): AAnimal(type)
{
    std::cout << "Constructor with name assigned called from Dog" << std::endl;
	_brain = new Brain();
    return;
}

Dog::Dog(const Dog &copied): AAnimal(copied)
{
    std::cout << "Copy constructor called from Dog" << std::endl;
	this->_type = copied._type;
	this->_brain = new Brain(*(copied._brain));
    return;
}

Dog &Dog::operator=(const Dog &base)
{
    if (this != &base)
        this->_type = base._type;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Destructor called from Dog" << std::endl;
    delete _brain;
    return;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return this->_brain;
}
