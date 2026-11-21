#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Constructor for Dog called!" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Copy constructor for Dog called!" << std::endl;
	brain = new Brain(*other.brain);
}

Dog::~Dog()
{
	std::cout << "Destructor for Dog called!" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}

const Brain* Dog::getBrain() const
{
	return brain;
}
