/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:40 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:58:07 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class	Dog: public Animal
{

	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog &copied);
		Dog &operator=(const Dog &base);
		~Dog();

		void	makeSound() const;
};

#endif
