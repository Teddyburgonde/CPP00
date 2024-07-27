/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:06:36 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/27 12:09:53 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    int         index;
    PhoneBook   phone; // create of an instance(an object) phone
    std::string commands;

    index = 0;
    phone.print_welcome();
    while (std::cin.eof() != 1) // as long as it does not contain of ctrl D
    {
        phone.print_choice_menu();
        std::cout << "> ";
        std::getline(std::cin, commands);
        if (commands == "ADD")
            phone.addNewContact();
        else if (commands == "SEARCH")
            phone.searchContact();
        else if (commands == "EXIT" || std::cin.eof())
        {
            std::cout << "See you soon" << std::endl;
            break;
        }
        else
            std::cout << "Error: you have to choose between ADD, SEARCH and EXIT" << std::endl;
    }
    return (0);
}
