#include <iostream>

class Zombie
{
private:
	std::string name;
	std::string type;

public:
	Zombie(std::string name,std::string type);
	Zombie();
	~Zombie();

	void	announce() const;
	void	set_type(std::string type);
	void	set_name(std::string type);
	
};