
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "\n===== CORRECT POLYMORPHISM =====" << std::endl;

    const Animal* animal = new Dog();
    animal->makeSound();

    delete animal;

    std::cout << "\n===== WRONG POLYMORPHISM =====" << std::endl;

    const WrongAnimal* wrongAnimal = new WrongCat();

    std::cout << "Type: " << wrongAnimal->getType() << std::endl;

    wrongAnimal->makeSound();

    // Evitiamo delete attraverso WrongAnimal*:
    // il distruttore della base non è virtuale.
    const WrongCat* wrongCat =
        static_cast<const WrongCat*>(wrongAnimal);

    delete wrongCat;

    std::cout << "\n===== END OF TESTS =====" << std::endl;

    return 0;
}

