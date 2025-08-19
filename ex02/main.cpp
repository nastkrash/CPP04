#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

#define NUM 4

int main()
{

    // Animal animal;
    
    Animal* animals[NUM];
    
    for (int i = 0; i < NUM; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    for (int i = 0; i < NUM; i++) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < NUM; i++) {
        delete animals[i];
    }
    
    return 0;
}