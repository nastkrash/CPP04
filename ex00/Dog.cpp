#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
    std::cout << "Dog default constructor called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof\n";
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "Dog copy constructor called." << std::endl;
    *this = src;
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called." << std::endl;
    if (&other != this)
    {
        Animal::operator=(other);
    }
    return (*this);
}

Dog::~Dog() 
{
    std::cout << "Dog destructor called." << std::endl;
}