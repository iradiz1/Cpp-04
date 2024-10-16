#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(Animal &copy) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &copy) {
		this->type = copy.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal deconstructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Animal soud" << std::endl;
}

std::string Animal::getType() const {
	return type;
}
