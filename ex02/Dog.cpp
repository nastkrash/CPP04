#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
    this->brain = new Brain();
    std::cout << "Dog default constructor called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof\n";
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "Dog copy constructor called." << std::endl;
    this->brain = new Brain(*(src.brain));
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator called." << std::endl;
    if (&other != this)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
    return (*this);
}

Dog::~Dog() 
{
    delete this->brain;
    std::cout << "Dog destructor called." << std::endl;
}