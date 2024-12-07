/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:35:42 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 11:19:58 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	_ideas[100];
		size_t		_nbIdeas;

	public:
        Brain();
        Brain(const Brain &copied);
        Brain &operator=(const Brain &base);
        virtual ~Brain();

		const std::string	getIdea(size_t i) const;
		void				addIdea(const std::string &idea);
		void				setIdea(size_t i, const std::string idea);
};

#endif
