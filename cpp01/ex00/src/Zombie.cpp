# include "Zombie.hpp"

/**
 * @brief Construct a new Zombie:: Zombie object
 * 
 * @param name The zombie's name
 */
Zombie::Zombie(std::string name)
{
	this->name = name;
}

/**
 * @brief Announces the zombie's name
 */
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}

/**
 * @brief Destroy the Zombie:: Zombie object
 * 
 */
Zombie::~Zombie (void)
{
	std::cout << name << ": I'm dead again..." << std::endl;
}