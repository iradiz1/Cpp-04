#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	Dogbrain = new Brain();
}

Dog::Dog(Dog &copy) : Animal(copy){
	std::cout << "Dog copy constructor called" << std::endl;
	Dogbrain = new Brain(*copy.Dogbrain);
	this->type = copy.type;
}

Dog& Dog::operator=(Dog &copy) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &copy) {
		Animal::operator=(copy);
		delete this->Dogbrain;
		this->Dogbrain = new Brain(*copy.Dogbrain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called" << std::endl;
	delete Dogbrain;
}

void Dog::makeSound() const {
	std::cout << "woof woof madafaka" << std::endl;
}

std::string Dog::getIdea(int index) {
	if (index > 99 || index < 0) {
		std::cout << "index invalid" << std::endl;
		return "";
	}
	return Dogbrain->getIdea(index);
}

void Dog::setIdea(std::string idea) {
	if (ideacount > 99) {
		std::cout << "too many ideas" << std::endl;
		return;
	}
	Dogbrain->setIdea(ideacount, idea);
	ideacount++;
}
