/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:01:28 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 13:00:03 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(const std::string &type);
        AAnimal(const AAnimal &copied);
        AAnimal &operator=(const AAnimal &base);
        virtual ~AAnimal();

		virtual void			makeSound() const = 0;
		const std::string		getType() const;
		virtual	Brain*			getBrain() const;
};

#endif
