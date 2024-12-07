/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:19:52 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:29:47 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class	WrongDog: public WrongAnimal
{
	public:
		WrongDog();
		WrongDog(const std::string &type);
		WrongDog(const WrongDog &copied);
		WrongDog &operator=(const WrongDog &base);
		~WrongDog();

		void	makeSound() const;
};

#endif
