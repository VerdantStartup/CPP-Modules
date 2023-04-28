# include "Zombie.hpp"

Zombie::~Zombie (void)
{
	std::cout << _name << ": I'm dead again..." << std::endl;
}

int main()
{
		Zombie zomb("Bob");
		zomb.announce();

		Zombie *zomb2 = new Zombie("Jim");
		zomb2->announce();

		randomChump("Joe");

		delete zomb2;
		return 0;
}