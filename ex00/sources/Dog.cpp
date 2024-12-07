/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:47 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 10:07:52 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void): Animal()
{
    std::cout << "Default constructor called from Dog" << std::endl;
    _type = "Dog";
    return;
}

Dog::Dog(const std::string &type): Animal(type)
{
    std::cout << "Constructor with name assigned called from Dog" << std::endl;
    return;
}

Dog::Dog(const Dog &copied): Animal()
{
    std::cout << "Copy constructor called from Dog" << std::endl;
    this->_type = copied._type;
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
    return;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
