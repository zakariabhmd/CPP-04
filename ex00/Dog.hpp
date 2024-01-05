#pragma once

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(Dog const &Copy);
		Dog &operator = (Dog const &assign);
		void makeSound() const;
		~Dog();
};