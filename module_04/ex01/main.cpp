

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    const Animal *a[4];
    for(int i = 0; i < 4; i++)
    {
        if(i < 4 / 2)
            a[i] = new Dog();
        else 
            a[i] = new Cat(); 
    }
    for(int i = 0; i < 4; i++)
        delete a[i];
return 0; 
}