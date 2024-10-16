#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(Dog &copy);
	Dog& operator=(Dog &copy);
	~Dog();

	void makeSound() const override; 

private:
	Brain* brain;
};