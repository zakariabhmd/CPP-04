#include "Cat.hpp"
#include "Dog.hpp"

void DeepCopie(){
	Dog a, b;

	std::cout << "++\n";
	a = b;
	std::cout << "++\n";

	std::cout << "--\n";
	Dog c(a);
	std::cout << "--\n";
}

int  main(){

	const Animal *anim[6];
	int i = 0;
	while(i < 6)
	{
		if (i < 3){
			anim[i] = new Cat;
			anim[i]->makeSound();
		}
		else{
			anim[i] = new Dog;
			anim[i]->makeSound();
		}
		i++;
	}
	std::cout << "----------------------\n" << std::endl;
	DeepCopie();
	std::cout << "----------------------\n" << std::endl;

	i = 0;
	while(i < 6)
	{
		delete anim[i];
		i++;
	}
	return 0;
}