#pragma once

#include <iostream>

class Animal{
public:
	Animal();
	Animal(Animal &copy);
	Animal& operator=(Animal &copy);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	std::string getType() const;
	std::string getIdea(int index);
	void setIdea(std::string idea);

protected:
	std::string type;

};