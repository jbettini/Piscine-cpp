

#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongCat.hpp"



int main() {
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const wrongAnimal* wrong = new wrongCat();
    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 
    std::cout << wrong->getType() << " " << std::endl; 
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    wrong->makeSound();
return 0; 
}