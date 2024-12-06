#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat
{
    public:
        Cat();
        Cat(const std::string &type);
        Cat(const Cat &copied);
        Cat &operator=(const Cat &base);
        ~Cat();
};

#endif
