/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:35:35 by verdant           #+#    #+#             */
/*   Updated: 2023/04/29 16:39:55 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>

using std::string;
using std::cout;
using std::getline;
using std::cin;
using std::endl;
using std::right;
using std::setw;

typedef enum e_print_type {
	PRINT_HEADER,
	PRINT_LINE,
} t_print_type;

class Contact {
	public:
	
		string	m_firstName;
		string	m_lastName;
		string	m_phonenumber;
		string	m_nickname;
		string	m_darkestSeceret;
};

class Phonebook {
	public:
		Phonebook();
		void		add(Phonebook &p);
		void		search(Phonebook &p);
		void		exit();
	private:
		int			checkIndex(void);
		void 		storeInput(Contact &c, string str, int idx);
		int			m_index;
		Contact	m_contact[8];
};

string		enterPrompt(string str);
void			printing(t_print_type type);

#endif