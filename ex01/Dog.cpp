#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << type << ": Default constractor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(Dog const &Copy){
	type = Copy.getType();
	std::cout << "Dog: Copy constractor called" << std::endl;
	brain = new Brain();
	*brain = *Copy.brain;
}

Dog &Dog::operator = (Dog const &assign){
	std::cout << "Dog: Copy Assignment called" << std::endl;
	type = assign.getType();
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *assign.brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "3ao3ao" << std::endl;
}

Dog::~Dog(){
	type = "Dog";
	std::cout << type << ": Default destractor called" << std::endl;
	delete brain;
}