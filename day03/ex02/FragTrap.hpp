#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

  private:
  public:
	FragTrap(void);
	FragTrap(std::string);
	FragTrap(FragTrap const &);
	FragTrap &operator=(FragTrap const &);
	~FragTrap(void);

	void vaulthunter_dot_exe(std::string const &target);
};

#endif
