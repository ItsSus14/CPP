
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "===== TEST 1: DERIVED OBJECTS =====" << std::endl;
    Dog dog;
    Cat cat;

    dog.makeSound();
    cat.makeSound();

    std::cout << "\n===== TEST 2: POLYMORPHISM =====" << std::endl;
    Animal* animalDog = new Dog();
    Animal* animalCat = new Cat();

    std::cout << animalDog->getType() << std::endl;
    std::cout << animalCat->getType() << std::endl;

    animalDog->makeSound();
    animalCat->makeSound();

    delete animalDog;
    delete animalCat;

    std::cout << "\n===== TEST 3: ABSTRACT CLASS =====" << std::endl;
    // Animal animal; // Decommenta per verificare l'errore di compilazione
    // Animal* animal = new Animal(); // Anche questo deve fallire

    std::cout << "\n===== END OF TESTS =====" << std::endl;

    return 0;
}

