#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	std::cout << "\n===== POLYMORPHIC ARRAY TEST =====" << std::endl;

const int size = 10;
Animal* animals[size];

for (int i = 0; i < size / 2; i++)
    animals[i] = new Dog();

for (int i = size / 2; i < size; i++)
    animals[i] = new Cat();

std::cout << "\n===== DELETING ANIMALS =====" << std::endl;

	for (int i = 0; i < size; i++)
		delete animals[i];
	return 0;
}
