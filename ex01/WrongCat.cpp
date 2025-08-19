#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
    std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assignment operator called." << std::endl;
    if (&other != this)
    {
        WrongAnimal::operator=(other);
    }
    return (*this);
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat destructor called." << std::endl;
}