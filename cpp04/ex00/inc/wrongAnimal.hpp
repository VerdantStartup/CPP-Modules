/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:17:31 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 16:20:07 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

using std::string;
using std::cout;
using std::endl;

class wrongAnimal
{
	protected:
		string _type;
	public:
		wrongAnimal(void);
		wrongAnimal(const wrongAnimal &src);
		virtual ~wrongAnimal(void);
		wrongAnimal& operator=(const wrongAnimal &rhs);

		void makeSound(void) const;
		string getType(void) const;
};

class wrongCat : public wrongAnimal
{
	public:
		wrongCat(void);
		wrongCat(const wrongCat &src);
		~wrongCat(void);
		wrongCat& operator=(const wrongCat &rhs);

		void makeSound(void) const;
};

#endif