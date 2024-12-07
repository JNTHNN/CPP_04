/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:45 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:18:28 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Default constructor called from Cat" << std::endl;
	_type = "Cat";
	return;
}

Cat::Cat(const std::string &type): Animal(type)
{
	std::cout << "Constructor with name assigned called from Cat" << std::endl;
	return;
}

Cat::Cat(const Cat &copied): Animal()
{
	std::cout << "Copy constructor called from Cat" << std::endl;
	this->_type = copied._type;
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
