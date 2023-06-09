/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 19:31:41 by verdant           #+#    #+#             */
/*   Updated: 2023/06/06 17:46:11 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "replace.hpp"

// 1. Open file
// 2. Read file
// 3. Replace occurence of s1 by s2
// 4. Write to new file
// 5. Close file


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	Replace r(argv[1], argv[2], argv[3]);
}