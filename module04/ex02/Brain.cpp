#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

Brain::Brain(const Brain &other)
{
	int i = 0;
	while (i < 100)
	{
		ideas[i] = other.ideas[i];
		i++;
	}
}

Brain& Brain::operator=(const Brain &other)
{
	if(this != &other)
	{
		int i = 0;
		while(i < 100)
		{
			ideas[i] = other.ideas[i];
			i++;
		}
	}
	return (*this);
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Invalid idea index!" << std::endl;
		return;
	}

	ideas[index] = idea;
}

const std::string& Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		static const std::string empty = "";
		std::cout << "Invalid idea index!" << std::endl;
		return empty;
	}
	return ideas[index];
}
