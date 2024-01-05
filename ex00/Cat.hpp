#pragma once

#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(Cat const &Copy);
		Cat &operator = (Cat const &assign);
		void makeSound() const ;
		~Cat();
};