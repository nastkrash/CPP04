#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include <iostream>
#define NUM 4

int main()
{
    Animal* array[NUM];

    for(int i = 0; i < NUM; i++)
    {
        if (i%2)
            array[i] = new Dog();
        else
            array[i] = new Cat(); 
    }

    for(int i = 0; i < NUM; i++)
        delete array[i];


    std::cout << "\n----- Deep Copy Test -----\n" << std::endl; 
    Dog* originalDog = new Dog();
    Dog* copiedDog = new Dog(*originalDog); 
    delete originalDog;
    copiedDog->makeSound();
    delete copiedDog;
    
    return 0;
}