#pragma once

#include <iostream>
using std::string;

class WrongAnimal {
	protected:
		string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &Copy);
		WrongAnimal &operator = (WrongAnimal const &assign);
		void makeSound() const ;
		string getType() const;
		virtual ~WrongAnimal();
};