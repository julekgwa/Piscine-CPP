#include <iostream>
#include <stdlib.h>
#include <time.h> 
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string		type;

public:
	ZombieEvent();
	~ZombieEvent();

	Zombie* newZombie(std::string name);
	void	setZombieType(std::string type);
	void	randomChump();
	
};