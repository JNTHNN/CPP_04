/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:38:29 by jgasparo          #+#    #+#             */
/*   Updated: 2024/12/07 12:47:13 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void): _nbIdeas(0)
{
    std::cout << "Default constructor called from Brain" << std::endl;
    return;
}

Brain::Brain(const Brain &copied)
{
    std::cout << "Copy constructor called from Brain" << std::endl;
	this->_nbIdeas = copied._nbIdeas;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = copied._ideas[i];
    *this = copied;
    return;
}

Brain &Brain::operator=(const Brain &base)
{
    if (this != &base)
		this->_nbIdeas = base._nbIdeas;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = base._ideas[i];
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Destructor called from Brain" << std::endl;
    return;
}

const std::string	Brain::getIdea(size_t i) const
{
    return this->_ideas[i];
}

void	Brain::addIdea(const std::string &idea)
{
    this->_ideas[this->_nbIdeas] = idea;
    this->_nbIdeas++;
    if (this->_nbIdeas == 100)
        this->_nbIdeas = 0;
}

void	Brain::setIdea(size_t i, const std::string idea)
{
    this->_ideas[i] = idea;
}
