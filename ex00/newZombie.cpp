#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

Zombie* newZombie( std::string name )
{
	return (new Zombie(name));
}