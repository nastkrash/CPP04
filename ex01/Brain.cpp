#include "Brain.hpp"
#include <iostream>


Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
}
Brain::Brain(const Brain &src)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = src;
}
Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}
Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain assignment operator called." << std::endl;
    if (&other != this)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}