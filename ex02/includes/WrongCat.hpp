/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:20:28 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:30:37 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class	WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const std::string &type);
        WrongCat(const WrongCat &copied);
        WrongCat &operator=(const WrongCat &base);
        ~WrongCat();

		void	makeSound() const;

};

#endif
