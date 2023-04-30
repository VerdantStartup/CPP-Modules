/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 19:31:55 by verdant           #+#    #+#             */
/*   Updated: 2023/04/30 07:46:14 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP


# include <iostream>
# include <fstream>
# include <string>

class Replace
{
	private:
		std::string		_s1;
		std::string		_s2;
		std::ifstream	_ifs;
		std::ofstream	_ofs;

	public:
		Replace(void);
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace(void);
		void replaceOccurence();
};

#endif