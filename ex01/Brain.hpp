#pragma once

#include <iostream>

class Brain {
public:
	Brain();
	Brain(Brain &copy);
	Brain& operator=(Brain &copy);
	~Brain();

	void setIdea(int index, std::string idea);
	std::string getIdea(int index);
private:
	std::string ideas[100];
};