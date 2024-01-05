#include "Animal.hpp"

Animal::Animal(){
	type = "Animal";
	std::cout << type << ": Default constractor called" << std::endl;
}

Animal::Animal(Animal const &Copy){
	std::cout << "Animal: Copy constractor called" << std::endl;
	*this = Copy;
}

Animal &Animal::operator = (Animal const &assign){
	this->type = assign.getType();
	return *this;
}

void Animal::makeSound() const {
	std::cout << "SBA3" << std::endl;
}

std::string Animal::getType() const{
	return type;
}

Animal::~Animal(){
	type = "Animal";
	std::cout << type << ": Default destractor called" << std::endl;
}