#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    
    cat->makeSound(); // Will output Cat's sound
    dog->makeSound(); // Will output Dog's sound
    meta->makeSound(); // Will output Animal's sound
    
    delete meta;
    delete dog;
    delete cat;
    
    std::cout << "\n--- WrongAnimal Example ---" << std::endl;
    
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    wrongAnimal->makeSound(); // Will output WrongAnimal sound
    wrongCat->makeSound(); // Will output WrongAnimal sound due to non-virtual method
    
    delete wrongAnimal;
    delete wrongCat;
    
    return 0;
}
