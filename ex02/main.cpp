#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
//#include "Brain.hpp"

int main() {
    const int arraySize = 4;
    Dog* dogs[arraySize / 2];
    Cat* cats[arraySize / 2];

    // Initialize dogs and cats in arrays
    for (int i = 0; i < arraySize / 2; ++i) {
        dogs[i] = new Dog();
        cats[i] = new Cat();
    }

    // Access and manipulate Dog ideas
    dogs[0]->setIdea("Chase the ball");
    dogs[0]->setIdea("Bark at the mailman");
    std::cout << "Dog 1 Idea 0: " << dogs[0]->getIdea(0) << std::endl;
    std::cout << "Dog 1 Idea 1: " << dogs[0]->getIdea(1) << std::endl;

    // Access and manipulate Cat ideas
    cats[0]->setIdea("Sleep on the couch");
    cats[0]->setIdea("Chase the laser");
    std::cout << "Cat 1 Idea 0: " << cats[0]->getIdea(0) << std::endl;
    std::cout << "Cat 1 Idea 1: " << cats[0]->getIdea(1) << std::endl;

    // Test deep copy by copying Dog
    Dog copyDog = *dogs[0];
    copyDog.setIdea("New idea for copyDog");

    std::cout << "Original Dog Idea 0 after copying: " << dogs[0]->getIdea(0) << std::endl;
    std::cout << "Copy Dog Idea 0: " << copyDog.getIdea(0) << std::endl;

    // Clean up
    for (int i = 0; i < arraySize / 2; ++i) {
        delete dogs[i];  // Calls destructor for Dog
        delete cats[i];  // Calls destructor for Cat
    }

    //const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    
    cat->makeSound(); // Will output Cat's sound
    dog->makeSound(); // Will output Dog's sound
    //meta->makeSound(); // Will output Animal's sound
    
    //delete meta;
    delete dog;
    delete cat;

    return 0;
}