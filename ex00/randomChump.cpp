#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie Mark(name);
	Mark.announce();
}