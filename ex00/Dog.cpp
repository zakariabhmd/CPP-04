#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << type << ": Default constractor called" << std::endl;
}

Dog::Dog(Dog const &Copy){
	std::cout << "Dog: Copy constractor called" << std::endl;
	*this = Copy;
}

Dog &Dog::operator = (Dog const &assign){
	type = assign.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << "3ao3ao" << std::endl;
}

Dog::~Dog(){
	type = "Dog";
	std::cout << type << ": Default destractor called" << std::endl;
}