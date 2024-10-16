#pragma once

#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal &copy);
    WrongAnimal& operator=(WrongAnimal &copy);
    ~WrongAnimal();


    void makeSound() const; // Not virtual
    std::string getType() const;
};