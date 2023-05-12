/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:28:10 by verdant           #+#    #+#             */
/*   Updated: 2023/05/12 16:48:48 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"
# include "animalBrain.hpp"


// int main(void)
// {
// 		Animal* animalDog1 = new Dog();
// 		Animal* animalDog2 = new Dog(*(static_cast<Dog*>(animalDog1)));

// 		std::cout << animalDog2->getType() << std::endl;
// 		animalDog2->makeSound();
// }

int main(void)
{
	Animal* animals[100];
	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
		delete animals[i];
	// system("leaks -q brain");
}