/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:28:10 by verdant           #+#    #+#             */
/*   Updated: 2023/06/09 13:17:44 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"
# include "animalBrain.hpp"

// The virtual keywords tells the code that it should check if the
// derived class has its own implementation of the function.
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