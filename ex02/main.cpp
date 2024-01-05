#include "Cat.hpp"
#include "Dog.hpp"

int  main(){
	const Animal* max = new Dog();
	const Animal* eva = new Cat();

	std::cout << max->getType() << std::endl;
	max->makeSound();
	std::cout << eva->getType() << std::endl;
	eva->makeSound();

	delete max;
	delete eva;
	return 0;
}