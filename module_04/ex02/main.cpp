#include "Cat.hpp"
#include "Dog.hpp"



int main() {
    Animal *a = new Dog();
    delete a;
    // Animal b;
    return 0; 
}