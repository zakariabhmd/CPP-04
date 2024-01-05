#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(WrongCat const &Copy);
		WrongCat &operator = (WrongCat const &assign);
		void makeSound() const ;
		~WrongCat();
};