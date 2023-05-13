# include "Zombie.hpp"



int main()
{
		// Allocated on the heap using the newZombie function
		Zombie *zombie = newZombie("Bob");
		zombie->announce();

		// Allocated on the stack using the randomChump function
		randomChump("Alice");

		// Allocated on the stack using the Zombie class
		Zombie zombie2("John");
		zombie2.announce();

		// Delete the heap allocated zombie
		delete zombie;
		return 0;
}