/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:03:07 by tkuramot          #+#    #+#             */
/*   Updated: 2023/10/15 17:03:10 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	str_toupper(std::string s)
{
	for (size_t i = 0; i < s.size(); i++)
		s[i] = std::toupper(s[i]);
	return (s);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string s(argv[i]);
		std::cout << str_toupper(s);
	}
	std::cout << std::endl;
	return (0);
}
