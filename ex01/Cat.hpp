#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &Copy);
		Cat &operator = (Cat const &assign);
		void makeSound() const;
		~Cat();
};