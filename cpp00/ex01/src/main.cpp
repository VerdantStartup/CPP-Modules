/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:44:25 by verdant           #+#    #+#             */
/*   Updated: 2023/04/29 16:42:13 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"



// How can I pass the phonebook object to the search function?


void	printing(t_print_type type)
{
	if (type == PRINT_HEADER) {
		cout << endl;
		for (int i = 0; i < 43; i++)
			cout << "-";
		cout << endl;
		cout << right << setw(10) << "Index" << "|";
		cout << right << setw(10) << "First Name" << "|";
		cout << right << setw(10) << "Last Name" << "|";
		cout << right << setw(10) << "Nickname" << endl;
		for (int i = 0; i < 43; i++)
			cout << "-";
		cout << endl;
	}
	if (type == PRINT_LINE) {
		for (int i = 0; i < 43; i++)
			cout << "-";
		cout << endl;
	}
}

string	enterPrompt(string str)
{
	string input;

	cout << str;
	getline(cin, input);
	while (input.empty() == true)
		return (input);
	for (int i = 0; i < input.length(); i++)
		input[i] = toupper(input[i]);
	return (input);
}


int main(void)
{
	Phonebook	p1;
	string		prompt;

	while (1)
	{
		prompt = enterPrompt("Enter a command: ");
		if (prompt == "EXIT")
			p1.exit();
		else if (prompt == "ADD")
			p1.add(p1);
		else if (prompt == "SEARCH")
			p1.search(p1);
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}