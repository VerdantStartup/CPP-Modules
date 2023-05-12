/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:35:28 by verdant           #+#    #+#             */
/*   Updated: 2023/05/12 18:11:34 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

// If I have a contact class how can I create a new instance from within the phonhebook
// member function

Phonebook::Phonebook() : m_index(0)
{
	cout <<  "Welcome to Booky!" << endl;
	for (int i = 0; i < 7; i++)
	{
		Contact newContact;
		m_contact[i] = newContact;
	}
	cout << "Phonebook created" << endl;
	cout << endl;
}

// else if's could be replaced use of function pointers
void Phonebook::storeInput(Contact &c, string str, int idx)
{
		string	input;
		
		cout << "Enter your " << str << ": ";
		getline(cin, input);
		while (input.empty() == true) {
			cout << "Input can't be empty! " << "Enter your " << str << ": ";
			getline(cin, input);
		}
		if (input.length() > 10)
		{
			input[9] = '.';
			input.resize(10);
		}
		if (idx == 0)
			c.setFirstName(input);
		else if (idx == 1)
			c.setLastName(input);
		else if (idx == 2)
			c.setNickname(input);
		else if (idx == 3)
			c.setPhoneNumber(input);
		else if (idx == 4)
			c.setDarkestSecret(input);
}

void Phonebook::add(Phonebook &p)
{
	string	input;
	string	arr[5] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
	
	cout << endl;
	if (m_index == 8) {
				cout << "Phonebook is full. Overwriting oldest contact." << endl;
				for (int i = 0; i < 8; i++) {
						p.m_contact[i] = p.m_contact[i+1];
				}
				m_index = 7;
		}
		for (int i = 0; i < 5; i++) {
				storeInput(p.m_contact[m_index], arr[i], i);
		}
		m_index++;
	cout << "Contact added" << endl;
	cout << endl;
}


int	Phonebook::checkIndex(void)
{
	string	input;
	int			len = 0;
	int			idx;
	
	while (true) {
		idx = 0;
		cout << "Enter index of contact to view: ";
		getline(cin, input);
		len = input.length();
		if (len == 0) {
			cout << "Input can't be empty!" << endl;
			continue ;
		}
		for (int i = 0; i < len; i++) {
			if (isdigit(input[i]) == false) {
				cout << "Please enter only numerical numbers" << endl;
				idx = -1;
				break ;
			}
		}
		if (idx == -1)
			continue ;
		idx = std::stoi(input);
		if (idx < 0 || idx > 7) {
			cout << "Invalid index. Choose an index between 0 - 7" << endl;
			continue ;
		} else if (idx >= m_index) {
			cout << "Index out of range" << endl;
			continue ;
		} else {
			break ;
		}
	}
	return (idx);
}

void Phonebook::search(Phonebook &p)
{
	int			idx;
	string	input;
	
	if (p.m_index == 0)
	{
		cout << "No contacts in phonebook" << endl;
		return ;
	}
	printing(PRINT_HEADER);
	for (int i = 0; i < p.m_index; i++) {
		cout << right << setw(10) << i << "|"
		<< right << setw(10) << p.m_contact[i].getFirstName() << "|"
		<< right << setw(10) << p.m_contact[i].getLastName() << "|"
		<< right << setw(10) << p.m_contact[i].getNickname() << endl;
	}
	printing(PRINT_LINE);
	idx = checkIndex();
	cout << endl;
	cout << "Index: " << idx  << endl;
	cout << "First name: " << p.m_contact[idx].getFirstName() << endl;
	cout << "Last name: " << p.m_contact[idx].getLastName() << endl;
	cout << "Nickname: " << p.m_contact[idx].getNickname() << endl;
	cout << endl;
}

void Phonebook::exit()
{
	cout << "Exiting phonebook" << endl;
	std::exit(0);
}

string Contact::getFirstName(void)
{
	return (m_firstName);
}

string Contact::getLastName(void)
{
	return (m_lastName);
}

string Contact::getNickname(void)
{
	return (m_nickname);
}

string Contact::getPhoneNumber(void)
{
	return (m_phonenumber);
}

string Contact::getDarkestSecret(void)
{
	return (m_darkestSeceret);
}

void Contact::setFirstName(string str)
{
	m_firstName = str;
}

void Contact::setLastName(string str)
{
	m_lastName = str;
}

void Contact::setNickname(string str)
{
	m_nickname = str;
}

void Contact::setPhoneNumber(string str)
{
	m_phonenumber = str;
}

void Contact::setDarkestSecret(string str)
{
	m_darkestSeceret = str;
}
