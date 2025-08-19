#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
        
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &src);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual void makeSound() const;
        std::string getType(void) const;
    
};