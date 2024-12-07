/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:21:39 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:21:39 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
    std::cout << "Default constructor called from WrongAnimal" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const std::string &type): _type(type)
{
    std::cout << "Constructor with name assigned called from WrongAnimal" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copied)
{
    std::cout << "Copy constructor called from WrongAnimal" << std::endl;
    *this = copied;
    return;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &base)
{
    if (this != &base)
    {
        this->_type = base._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Destructor called from WrongAnimal" << std::endl;
    return;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Bonjour" << std::endl;
}

const std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}
