/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:45 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 13:01:10 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void): AAnimal()
{
    std::cout << "Default constructor called from Cat" << std::endl;
    _type = "Cat";
	_brain = new Brain();
    return;
}

Cat::Cat(const std::string &type): AAnimal(type)
{
    std::cout << "Constructor with name assigned called from Cat" << std::endl;
	_brain = new Brain();
    return;
}

Cat::Cat(const Cat &copied)
{
    std::cout << "Copy constructor called from Cat" << std::endl;
    this->_type = copied._type;
	this->_brain = new Brain(*(copied._brain));
    return;
}

Cat &Cat::operator=(const Cat &base)
{
    if (this != &base)
        this->_type = base._type;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Destructor called from Cat" << std::endl;
    return;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuu" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return this->_brain;
}
