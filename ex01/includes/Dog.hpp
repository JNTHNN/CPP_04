/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:40 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 10:18:13 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class	Dog: public Animal
{
	private:
		Brain* _brain;

	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog &copied);
		Dog &operator=(const Dog &base);
		~Dog();

		void	makeSound() const;
		Brain*	getBrain() const;
};

#endif
