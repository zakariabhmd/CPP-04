#pragma once
#include <iostream>

class Brain {
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &Copy);
		Brain &operator = (Brain const &assign);
		~Brain();
};