/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchbani <zchbani@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:49:12 by zchbani           #+#    #+#             */
/*   Updated: 2022/05/11 08:24:30 by zchbani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string str(argv[i]);
            for (size_t j = 0; j < str.size(); j++)
                std::cout << (char)std::toupper(str[j]);
        }
        std::cout << std::endl;
    }
    return 0;
}