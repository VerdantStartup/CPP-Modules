#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

using std::string;

class Zombie
{
	public:
		Zombie();
		void announce(void); // Member function
		void setName(string name); // Member function
		~Zombie(); // Destructor

	private:
		string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif