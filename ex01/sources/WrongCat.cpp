/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:22:06 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:31:16 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
    std::cout << "Default constructor called from WrongCat" << std::endl;
    _type = "WrongCat";
    return;
}

WrongCat::WrongCat(const std::string &type): WrongAnimal(type)
{
    std::cout << "Constructor with name assigned called from WrongCat" << std::endl;
    return;
}

WrongCat::WrongCat(const WrongCat &copied)
{
    std::cout << "Copy constructor called from WrongCat" << std::endl;
    *this = copied;
    return;
}

WrongCat &WrongCat::operator=(const WrongCat &base)
{
    if (this != &base)
        this->_type = base._type;
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "Destructor called from WrongCat" << std::endl;
    return;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Miaouuu" << std::endl;
}
