#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(Brain &copy) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &copy) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = copy.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain deconstructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100) {
		this->ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) {
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}