/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:43 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:17:10 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void): _type("Animal")
{
    std::cout << "Default constructor called from Animal" << std::endl;
    return;
}

Animal::Animal(const std::string &type): _type(type)
{
    std::cout << "Constructor with name assigned called from Animal" << std::endl;
    return;
}

Animal::Animal(const Animal &copied)
{
    std::cout << "Copy constructor called from Animal" << std::endl;
    *this = copied;
    return;
}

Animal &Animal::operator=(const Animal &base)
{
    if (this != &base)
    {
        this->_type = base._type;
    }
    return *this;
}

Animal::~Animal(void)
{
    std::cout << "Destructor called from Animal" << std::endl;
    return;
}

void	Animal::makeSound(void) const
{
	std::cout << "Bonjour" << std::endl;
}

const std::string	Animal::getType(void) const
{
	return this->_type;
}
