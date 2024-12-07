/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:22:25 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:22:25 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongDog.hpp"

WrongDog::WrongDog(void): WrongAnimal()
{
    std::cout << "Default constructor called from WrongDog" << std::endl;
    _type = "WrongDog";
    return;
}

WrongDog::WrongDog(const std::string &type): WrongAnimal(type)
{
    std::cout << "Constructor with name assigned called from WrongDog" << std::endl;
    return;
}

WrongDog::WrongDog(const WrongDog &copied): WrongAnimal(copied)
{
    std::cout << "Copy constructor called from WrongDog" << std::endl;
    *this = copied;
    return;
}

WrongDog &WrongDog::operator=(const WrongDog &base)
{
    if (this != &base)
        this->_type = base._type;
    return *this;
}

WrongDog::~WrongDog(void)
{
    std::cout << "Destructor called from WrongDog" << std::endl;
    return;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Wrong Woof Woof" << std::endl;
}
