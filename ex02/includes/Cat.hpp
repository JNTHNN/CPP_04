/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:34 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 13:10:23 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class	Cat: public AAnimal
{
	private:
		Brain* _brain;
		
    public:
        Cat();
        Cat(const std::string &type);
        Cat(const Cat &copied);
        Cat &operator=(const Cat &base);
        ~Cat();

		void	makeSound() const;
		Brain*	getBrain() const;
};

#endif
