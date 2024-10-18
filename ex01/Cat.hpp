#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(Cat &copy);
	Cat& operator=(Cat &copy);
	~Cat();

	void makeSound() const override;
	std::string getIdea(int index);
	void setIdea(std::string idea);

private:
	Brain* Catbrain;
	int ideacount = 0;
};