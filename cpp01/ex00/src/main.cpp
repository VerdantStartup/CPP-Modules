# include "Zombie.hpp"



int main()
{
		Zombie *zombie = newZombie("Bob");
		zombie->announce();

		randomChump("Alice");
		delete zombie;
		return 0;
}