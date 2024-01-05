#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << type << ": Default constractor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(Cat const &Copy){
	std::cout << "Cat: Copy constractor called" << std::endl;
	type = Copy.getType();
	brain = new Brain();
	*brain = *Copy.brain;
}

Cat &Cat::operator = (Cat const &assign){
	type = assign.getType();
	if (brain)
		delete brain;
	brain = new Brain();
	*brain = *assign.brain;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "MAWMAAW" << std::endl;
}

Cat::~Cat(){
	type = "Cat";
	std::cout << type << ": Default destractor called" << std::endl;
	delete brain;
}

