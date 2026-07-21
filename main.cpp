#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	int n;
	std::string name = "HordeZombie";

	std::cout << "How big is your Zombie horde? ";
	std::cin >> n;
	Zombie* horde = zombieHorde(n, name);;
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}