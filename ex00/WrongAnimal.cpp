#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	type = "WrongAnimal";
	std::cout << type << ": Default constractor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &Copy){
	std::cout << "WrongAnimal: Copy constractor called" << std::endl;
	*this = Copy;
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &assign){
	this->type = assign.getType();
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "SSBAAA3" << std::endl;
}

string WrongAnimal::getType() const{
	return type;
}

WrongAnimal::~WrongAnimal(){
	type = "WrongAnimal";
	std::cout << type << ": Default destractor called" << std::endl;
}