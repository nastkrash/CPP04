#include "Animal.hpp"

Animal::Animal() : type("default") 
{
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type) : type(type) 
{
    std::cout << "Animal parametrized constructor called." << std::endl;
}

std::string Animal::getType(void) const
{
    return(type);
}

void Animal::makeSound(void) const
{
    std::cout << "Sound of animal\n";
}

Animal::Animal(const Animal& src)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = src;
}

Animal &Animal::operator=(const Animal& other)
{
    std::cout << "Animal assigned operator called." << std::endl;
    if (&other != this)
    {
        type = other.getType();
    }
    return (*this);
}

Animal::~Animal() 
{
    std::cout << "Animal destructor called." << std::endl;
}