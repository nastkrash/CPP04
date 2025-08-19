#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* Wrongmeta = new WrongAnimal();
    const WrongAnimal* Wrongi = new WrongCat();
    std::cout << Wrongi->getType() << " " << std::endl;
    Wrongi->makeSound(); // will output WrongAnimal sound
    Wrongmeta->makeSound();

    delete Wrongmeta;
    delete Wrongi;
    delete meta;
    delete j;
    delete i;
    return 0;
}