#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCat";
	std::cout << type << ": Default constractor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &Copy){
	std::cout << "WrongCat: Copy constractor called" << std::endl;
	*this = Copy;
}

WrongCat &WrongCat::operator = (WrongCat const &assign){
	type = assign.getType();
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "MAWWMAWW" << std::endl;
}

WrongCat::~WrongCat(){
	type = "WrongCat";
	std::cout << type << ": Default destractor called" << std::endl;
}
