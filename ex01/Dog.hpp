#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog const &Copy);
		Dog &operator = (Dog const &assign);
		void makeSound() const;
		~Dog();
};