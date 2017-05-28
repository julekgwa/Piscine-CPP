#include "ZombieEvent.hpp"

int main()
{
	int		i = -1;

	ZombieEvent	zombies = ZombieEvent();
	zombies.setZombieType("Killer");
	Zombie	*zombie1 = zombies.newZombie("Junius");
	zombie1->announce();
	zombies.randomChump();

	zombies.setZombieType("King Junius");
	while (i++ < 10)
		zombies.randomChump();

	return 0;
}