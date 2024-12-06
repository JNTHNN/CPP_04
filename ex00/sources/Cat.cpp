#include "../includes/Cat.hpp"

Cat::Cat(void):
{
    std::cout << "Default constructor called from Cat" << std::endl;
    return;
}

Cat::Cat(const std::string &type): _type(type)
{
    std::cout << "Constructor with name assigned called from Cat" << std::endl;
    return;
}

Cat::Cat(const Cat &copied)
{
    std::cout << "Copy constructor called from Cat" << std::endl;
    *this = copied;
    return;
}

Cat &Cat::operator=(const Cat &base)
{
    if (this != &base)
    {
        this->_type = base._type;
    }
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Destructor called from Cat" << std::endl;
    return;
}
