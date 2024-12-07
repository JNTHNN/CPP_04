/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:34 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 09:58:14 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class   Cat: public Animal
{
    public:
        Cat();
        Cat(const std::string &type);
        Cat(const Cat &copied);
        Cat &operator=(const Cat &base);
        ~Cat();

		void	makeSound() const;

};

#endif
