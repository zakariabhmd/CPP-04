#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void Wrong(){
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound(); //will output the cat sound!
	meta->makeSound();

	delete meta;
	delete j;
}

int  main(){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	std::cout << "-------------WrongAnimals-----------" << std::endl;
	Wrong();
	return 0;
}