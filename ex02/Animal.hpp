#pragma once

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &src);
        virtual ~Animal();
        Animal& operator=(const Animal& other);
        virtual void makeSound() const = 0; // Pure virtual function
        std::string getType(void) const;
    
};