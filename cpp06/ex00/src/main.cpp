/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilsch <mwilsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:10:13 by mwilsch           #+#    #+#             */
/*   Updated: 2023/07/13 09:56:42 by mwilsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// statc_cast, dynamic_cast, reinterpret_cast, const_cast

#include "conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert [string]" << std::endl;
		return 1;
	}
	ScalarConversion sc(argv[1]);
	return 0;
}