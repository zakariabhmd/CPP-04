#pragma once
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &Copy);
		Animal &operator = (Animal const &assign);
		virtual  void makeSound() const = 0;
		std::string getType() const;
		virtual ~Animal();
};
