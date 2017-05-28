#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"

class Human
{
	public:
		Human();
//		~Human();

		std::string	identify() const;
		const Brain& getBrain() const;	

	private:
		const	Brain _brain;
};
#endif

