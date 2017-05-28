#include "Zombie.hpp"

class ZombieHorde {
private:
    Zombie *_zombies;
    int _N;

public:
    ZombieHorde(int N);

    ~ZombieHorde();

    void announce();

};