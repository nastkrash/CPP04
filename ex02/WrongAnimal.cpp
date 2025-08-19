#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default") 
{
    std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) 
{
    std::cout << "Animal parametrized constructor called." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return(type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Sound of wrong animal\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal assignment operator called." << std::endl;
    if (&other != this)
    {
        type = other.getType();
    }
    return (*this);
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}