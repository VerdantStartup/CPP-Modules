/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:49:48 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 18:52:07 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"
# include "wrongAnimal.hpp"


int main()
{
    Animal* animalDog1 = new Dog();
    Animal* animalDog2 = new Dog(*animalDog1); // Copy constructor

    std::cout << animalDog2->getType() << std::endl;
		animalDog2->makeSound();

    delete animalDog1;
    delete animalDog2;

    return 0;
}



// int main(void)
// {
// 	// Using a reference to an Dog object
// 	Dog doggy;
// 	const Animal* dog0 = &doggy;
// 	cout << "----------------------" << endl;
// 	cout << "Animal: ";
// 	cout << dog0->getType() << endl << "Make the sound: ";
// 	dog0->makeSound();
// 	cout << "----------------------" << endl;

// 	// Using a pointer to an allocated Animal object
// 	const Animal* animals[3] = {new Animal(), new Dog(), new Cat()};
// 	for (int i = 0; i < 3; i++) {
// 		cout << "----------------------" << endl;
// 		cout << "Animal: ";
// 		cout << animals[i]->getType() << endl << "Make the sound: ";
// 		animals[i]->makeSound();
// 		delete animals[i];
// 		cout << "----------------------" << endl;
// 	}
	

// 	// Showcasing wrongAnimal and wrongCat Behaviour
// 		// makeSound isn't virtual, which is why it doesn't work
	
// 	wrongCat wrong;
// 	const wrongAnimal* wrong0 = &wrong;

// 	cout << "----------------------" << endl;
// 	cout << "wrongAnimal: ";
// 	cout << wrong0->getType() << endl << "Make the sound: ";
// 	wrong0->makeSound(); // This should not miau
// 	cout << "----------------------" << endl;
// }