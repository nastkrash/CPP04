#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
    this->brain = new Brain();
    std::cout << "Cat default constructor called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow\n";
}

Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "Cat copy constructor called." << std::endl;
    this->brain = new Brain(*(src.brain)); 
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator called." << std::endl;
    if (&other != this)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
    return (*this);
}

Cat::~Cat() 
{
    delete this->brain;
    std::cout << "Cat destructor called." << std::endl;
}