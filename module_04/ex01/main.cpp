

#include "Cat.hpp"
#include "Dog.hpp"
#include "wrongCat.hpp"



int main() {
    const Animal *a;
    for(int i = 0; i < 4; i++)
    {
        if(i < 4 / 2)
            a[i] = new Dog();
        else 
            a[i] = new Cat(); 
    }
    delete a;
return 0; 
}