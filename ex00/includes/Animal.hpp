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
        ~Animal();
};

#endif
