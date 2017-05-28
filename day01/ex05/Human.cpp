#include "Human.hpp"

Human::Human() : _brain(Brain())
{
}

const	Brain& Human::getBrain() const
{
	return this->_brain;
}

std::string	Human::identify() const
{
	return	_brain.identify();
}
