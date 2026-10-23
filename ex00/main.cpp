#include "Zombie.hpp"

int main(int argc,char **argv)
{
	randomChump("Foo");

	Zombie *Boo = newZombie("Boo");
	Boo->announce();
	delete Boo;
}