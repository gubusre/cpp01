#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	std::string name;
	std::string command;
	while(true)
	{
		std::cout << "Where do you want to assign the zombie: (Stack/Heap/Random)";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "Stack" || command == "S")
		{
			std::cout << "Enter name of zombie: ";
			if (!std::getline(std::cin, name))
				break ;
			Zombie new_Zombie( name );
			new_Zombie.announce();
		}
		else if (command == "Heap" || command == "H")
		{
			std::cout << "Enter name of zombie: ";
			if (!std::getline(std::cin, name))
				break ;
			Zombie* z = newZombie( name );
			z->announce();
			delete z;
		}
		else if (command == "Random" || command == "R")
		{
			name = "Chump";
			Zombie new_Zombie( name );
			new_Zombie.announce();
		}
	}
	return 0;
}