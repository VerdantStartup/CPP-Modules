/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 19:34:32 by verdant           #+#    #+#             */
/*   Updated: 2023/05/13 14:06:18 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
using std::cout;
using std::endl;

Replace::Replace(void) {};

Replace::~Replace(void) {
	_ifs.close();
	_ofs.close();
	std::cout << "Files closed" << std::endl;
};

void Replace::replaceOccurence() {
	std::string			line;
	std::string			replaceWith = this->_s2;
	size_t					pos = 0;

	while (std::getline(_ifs, line))
	{
			pos = line.find(this->_s1);
			while (pos != std::string::npos) 
			{
				for (size_t i = 0; i < replaceWith.length(); i++)
					line[pos++] = replaceWith[i];
				pos = line.find(this->_s1);
			}
		_ofs << line << endl;
	}
}


Replace::Replace(std::string filename, std::string s1, std::string s2) {
	this->_s1 = s1;
	this->_s2 = s2;
	
	if (filename.empty() || s1.empty() || s2.empty()) {
		cout << "Empty string" << endl;
		return ;
	}
	_ifs.open(filename);
	if (_ifs.good() == false) {
		cout << "File does not exsit" << endl;
		return ;
	}
	if (_ifs.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "The file is empty." << std::endl;
		return ;
	}
	_ofs.open(filename + ".replace");
	if (_ofs.good() == false) {
		std::cout << "Failed creating new file" << std::endl;
		return ;
	}
	replaceOccurence();
}
