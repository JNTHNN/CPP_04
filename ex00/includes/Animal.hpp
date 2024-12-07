/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:28 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:26:14 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &copied);
        Animal &operator=(const Animal &base);
        virtual ~Animal();

		virtual void		makeSound() const;
		const std::string	getType() const;
};

#endif
