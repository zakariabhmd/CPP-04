#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << type << ": Default constractor called" << std::endl;
}

Cat::Cat(Cat const &Copy){
	std::cout << "Cat: Copy constractor called" << std::endl;
	*this = Copy;
}

Cat &Cat::operator = (Cat const &assign){
	type = assign.getType();
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MAWMAAW" << std::endl;
}

Cat::~Cat(){
	type = "Cat";
	std::cout << type << ": Default destractor called" << std::endl;
}

