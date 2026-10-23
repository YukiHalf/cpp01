#include "Zombie.hpp"

void Zombie::setName(const std::string& name)
{
	m_Name = name;
}

void Zombie::announce(void)
{
		std::cout << m_Name << ": " << "BraiiiiiiinnnzzzZ..."<<std::endl;
}

