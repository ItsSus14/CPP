#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Constructor for Dog called!" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Copy constructor for Dog called!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog called!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
		Animal::operator=(other);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}
