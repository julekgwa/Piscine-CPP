#include "Brain.hpp"

Brain::Brain(){}

Brain::~Brain(){}

std::string	Brain::identify() const
{
	std::ostringstream	ss;

	ss << (void const*)this;
	
	std::string ad = ss.str();

	return (ad);
}
