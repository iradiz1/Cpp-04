#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called" << std::endl;;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(WrongCat &copy) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &copy) {
		this->type = copy.type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat deconstructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong cat mjau mjau madafaka" << std::endl;
}
