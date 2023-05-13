/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:28:10 by verdant           #+#    #+#             */
/*   Updated: 2023/05/13 16:04:47 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"
# include "animalBrain.hpp"


int main(void)
{
	// Animal test; // Uncomment to see the error
	Animal *dog1 = new Dog();
	dog1->makeSound();

	delete dog1;
	return 0;
}