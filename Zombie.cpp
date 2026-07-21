#include "Zombie.hpp"
#include <iostream>
#include <iomanip>


Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << _name << " is destroyed" << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
}