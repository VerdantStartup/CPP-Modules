/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:28:10 by verdant           #+#    #+#             */
/*   Updated: 2023/05/12 17:32:33 by verdant          ###   ########.fr       */
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
	Animal *dog1 = new Dog();
	dog1->makeSound();

	delete dog1;
	return 0;
}