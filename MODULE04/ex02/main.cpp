#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include <vector>


int main()
{
//     const Animal* meta = new Animal();
//     const Animal* i = new Dog();
//    // const Animal* l = new Dog();
//     const Animal* j = new Cat();
//     delete i;
//     i = j;
//     delete meta;
//     delete j;
//     // i->makeSound(); //will output the cat sound!
//     // Dog basic;
//     // {
//     //     Dog tmp = basic;

//     // };

//     return 0;
    int num = 2;

    const Animal *animals[num];
    for (int i = 0; i < num; ++i)
    {
        if(i % 2 == 0)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        }
    }

    for (int i = 0; i < num; ++i)
    {
        std::cout << std::endl;
        std::cout << "This is a " << animals[i]->getType() << "." << std::endl;
        animals[i]->makeSound();
        std::cout << std::endl;
    }

    for(int i = 0; i < num; ++i)
    {
        delete (animals[i]);
    }

}