#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

Zombie::~Zombie(void)
{
	std::cout << _name << " is destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
}