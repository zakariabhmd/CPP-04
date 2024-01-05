#include "Brain.hpp"


Brain::Brain(){
	std::cout <<  "Brain : Default constractor called" << std::endl;
}

Brain::Brain(Brain const &Copy){
	std::cout << "Brain: Copy constractor called" << std::endl;
	*this = Copy;
}

Brain &Brain::operator = (Brain const &assign){
	int	i = 0;
	while(i < 100)
	{
		ideas[i] = assign.ideas[i];
		i++;
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain : Default destractor called" << std::endl;
}