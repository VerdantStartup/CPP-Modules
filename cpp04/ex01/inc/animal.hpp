/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:42:34 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 17:51:10 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "animalBrain.hpp"

class Animal
{
	protected:
		string _type;
	public:
		Animal(void);
		Animal(const Animal &src);
		virtual ~Animal(void);
		Animal& operator=(const Animal &rhs);

		virtual void makeSound(void) const;
		string getType(void) const;
};

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog(void);
		Dog(const Dog &src);
		~Dog(void);
		Dog& operator=(const Dog &rhs);

		void makeSound(void) const;
};

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat(void);
		Cat(const Cat &src);
		~Cat(void);
		Cat& operator=(const Cat &rhs);

		void makeSound(void) const;
};

#endif