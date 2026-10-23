#include "Zombie.hpp"

int main(int argc,char **argv)
{
	Zombie *horde = zombieHorde(50,"Jeff");

	if(!horde)
		return -1;
	for(int i = 0;i < 50; i++)
		{
		std::cout << i << " ";
		horde[i].announce();	
	}
	delete[] horde;
}