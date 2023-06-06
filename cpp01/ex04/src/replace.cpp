/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 19:34:32 by verdant           #+#    #+#             */
/*   Updated: 2023/06/06 17:32:44 by mwilsch          ###   ########.fr       */
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

void Replace::replaceOccurence(void) {
	std::string line;
	std::string replaceWith = this->_s2;
	size_t pos = 0;

	while (std::getline(_ifs, line))
	{
		pos = line.find(this->_s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, this->_s1.length());
			line.insert(pos, replaceWith);
			pos = line.find(this->_s1, pos + replaceWith.length());
		}
		_ofs << line << std::endl;
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
