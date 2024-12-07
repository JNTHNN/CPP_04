/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:43 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 10:17:46 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void): _type("AAnimal")
{
    std::cout << "Default constructor called from AAnimal" << std::endl;
    return;
}

AAnimal::AAnimal(const std::string &type): _type(type)
{
    std::cout << "Constructor with name assigned called from AAnimal" << std::endl;
    return;
}

AAnimal::AAnimal(const AAnimal &copied)
{
    std::cout << "Copy constructor called from AAnimal" << std::endl;
    *this = copied;
    return;
}

AAnimal &AAnimal::operator=(const AAnimal &base)
{
    if (this != &base)
    {
        this->_type = base._type;
    }
    return *this;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Destructor called from AAnimal" << std::endl;
    return;
}

// void	AAnimal::makeSound(void) const
// {
// 	std::cout << "Bonjour" << std::endl;
// }

const std::string	AAnimal::getType(void) const
{
	return this->_type;
}

Brain*	AAnimal::getBrain(void) const
{
	return NULL;
}
