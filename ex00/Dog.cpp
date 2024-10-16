#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog &copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(Dog &copy) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &copy) {
		this->type = copy.type;
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "woof woof madafaka" << std::endl;
}
