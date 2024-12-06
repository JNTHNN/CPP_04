#include "../includes/Dog.hpp"

Dog::Dog(void): Animal()
{
    std::cout << "Default constructor called from Dog" << std::endl;
    _type = "Dog";
    return;
}

Dog::Dog(const std::string &type): Animal(type)
{
    std::cout << "Constructor with name assigned called from Dog" << std::endl;
    return;
}

Dog::Dog(const Dog &copied)
{
    std::cout << "Copy constructor called from Dog" << std::endl;
    *this = copied;
    return;
}

Dog &Dog::operator=(const Dog &base)
{
    if (this != &base)
        this->_type = base._type;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Destructor called from Dog" << std::endl;
    return;
}
