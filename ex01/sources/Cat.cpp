/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:45 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 12:48:49 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void): Animal()
{
    std::cout << "Default constructor called from Cat" << std::endl;
    _type = "Cat";
	_brain = new Brain();
    return;
}

Cat::Cat(const std::string &type): Animal(type)
{
    std::cout << "Constructor with name assigned called from Cat" << std::endl;
	_brain = new Brain();
    return;
}

Cat::Cat(const Cat &copied): Animal(copied)
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
    delete _brain;
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
