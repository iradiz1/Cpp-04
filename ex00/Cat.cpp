#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;;
	type = "Cat";
}

Cat::Cat(Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(Cat &copy) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &copy) {
		this->type = copy.type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat deconstructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "mjau mjau madafaka" << std::endl;
}
