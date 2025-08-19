#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
    std::cout << "Cat default constructor called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "Cat copy constructor called." << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called." << std::endl;
    if (&other != this)
    {
        Animal::operator=(other);
    }
    return (*this);
}

Cat::~Cat() 
{
    std::cout << "Cat destructor called." << std::endl;
}