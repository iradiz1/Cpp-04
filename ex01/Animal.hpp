#pragma once

#include <iostream>

class Animal{
public:
	Animal();
	Animal(Animal &copy);
	Animal& operator=(Animal &copy);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string type;

};