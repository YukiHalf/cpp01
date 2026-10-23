#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>


class Zombie
{
private:
	std::string m_Name;

public: 
	void announce( void );

	Zombie()
		: m_Name("Jeff")
	{
	}
	Zombie(const std::string& newName)
		: m_Name(newName)
	{ 
	}
	~Zombie()
	{
		std::cout << m_Name << " decided to go back underground." << std::endl;
	}
	void setName(const std::string& name);
};

Zombie* zombieHorde( int N, std::string name );

#endif