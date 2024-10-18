#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;;
	type = "Cat";
	Catbrain = new Brain();
}

Cat::Cat(Cat &copy) : Animal(copy){
	std::cout << "Cat copy constructor called" << std::endl;
	Catbrain = new Brain(*copy.Catbrain);
	this->type = copy.type;
}

Cat& Cat::operator=(Cat &copy) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &copy) {
		Animal::operator=(copy);
		delete this->Catbrain;
		this->Catbrain = new Brain(*copy.Catbrain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat deconstructor called" << std::endl;
	delete Catbrain;
}

void Cat::makeSound() const {
	std::cout << "mjau mjau madafaka" << std::endl;
}

std::string Cat::getIdea(int index) {
	if (index > 99 || index < 0) {
		std::cout << "index invalid" << std::endl;
		return "";
	}
	return Catbrain->getIdea(index);
}

void Cat::setIdea(std::string idea) {
	if (ideacount > 99) {
		std::cout << "too many ideas" << std::endl;
		return;
	}
	Catbrain->setIdea(ideacount, idea);
	ideacount++;
}
