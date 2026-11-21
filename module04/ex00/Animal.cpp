#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Unknown")
{
	std::cout << "Default constructor for Animal called!" << std::endl;
}

Animal::Animal(const std::string &type) : type(type)
{
	std::cout << "Constructor for Animal called!" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Copy constructor for Cat called!" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	if(this != &other)
		type = other.type;
	return (*this);
}

const std::string& Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal make a sound" << std::endl;	
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
