/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalBrain.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:19:12 by verdant           #+#    #+#             */
/*   Updated: 2023/05/11 17:20:00 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALBRAIN_HPP
# define ANIMALBRAIN_HPP

# include <iostream>

using std::string;
using std::cout;
using std::endl;

class Brain
{
	protected:
		string _ideas[100];
	public:
		Brain(void);
		Brain(const Brain &src);
		~Brain(void);
		Brain& operator=(const Brain &rhs);
};

#endif