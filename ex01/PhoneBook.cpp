/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:07:15 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/27 12:07:34 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) 
{
    index = 0;
}

PhoneBook::~PhoneBook(void) 
{
}


void    PhoneBook::print_choice_menu(void)
{
    std::cout << "***************************************" << std::endl;
    std::cout << "*      ADD - Add a new contact        *" << std::endl;
    std::cout << "*      SEARCH - Display all contact   *" << std::endl;
    std::cout << "*      EXIT - Exit PhoneBook          *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "***************************************"  << std::endl;
}

void    PhoneBook::print_welcome(void)
{
    std::cout <<std::endl;
    std::cout << "***************************************" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "*              WELCOME                *" << std::endl;
    std::cout << "*              to the                 *" << std::endl;
    std::cout << "*              Phone Book             *" << std::endl;
    std::cout << "*                                     *" << std::endl;
    std::cout << "***************************************" << std::endl;
}

std::string printFormatForDisplayContact(std::string str)
{
    std::string tmp;

    if (str.length() <= 10)
    {
        // until i equals 10 - word size
        // print space
        // at the end we add the word
        for (size_t i = 0; i < (10 - str.length()); i++)
            tmp += " ";
        tmp += str;
    }
    else
    {
        tmp = str;
        tmp.resize(9);
        tmp += ".";
    }
    return (tmp);
}

void PhoneBook::displayContact(void) const
{
    std::cout <<std::endl;
    std::cout << "*********************************************" <<std::endl;
    std::cout << "*                  Contacts                 *" <<std::endl;
    std::cout << "*********************************************" <<std::endl;
    std::cout << "|     index|first name| last name|  nickname|" <<std::endl;
    std::cout << "|----------|----------|----------|----------|" <<std::endl;
    for (size_t i = 0; i < 8; i++)
	{
	    std::cout << "|         " << i;
        std::cout << "|" << printFormatForDisplayContact(contact[i].getFirstName());
        std::cout << "|" << printFormatForDisplayContact(contact[i].getLastName());
        std::cout << "|" << printFormatForDisplayContact(contact[i].getNickName());
        std::cout << "|" << std::endl;
    }
}

void    PhoneBook::addNewContact()
{
    PhoneBook phone;

    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Enter first Name: ";
    std::getline(std::cin, firstName);
    if (!firstName[0] || std::cin.eof())
	{
		std::cout << "Error : You have left a field blank." << std::endl;
		return ;
	}

    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    if (!lastName[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error : You have left a field blank." << std::endl;
		return ;
	}

    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    if (!nickname[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error : You have left a field blank." << std::endl;
		return ;
	}

    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    if (!phoneNumber[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error : You have left a field blank." << std::endl;
		return ;
	}

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);
    if (!darkestSecret[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error : You have left a field blank." << std::endl;
		return ;
	}

    // We store the information in the contact table
    contact[index].setFirstName(firstName);
    contact[index].setLastName(lastName);
    contact[index].setNickname(nickname);
    contact[index].setPhoneNumber(phoneNumber);
    contact[index].setDarkestSecret(darkestSecret);
    if (index == 7)
        index = 0;
    else
        index++;
}

void    PhoneBook::print_info_one_contact(int index)
{
    std::cout << "First name: " << contact[index].getFirstName() << std::endl;
    std::cout << "Last name: "  << contact[index].getLastName() << std::endl;
    std::cout << "Nickname: "  << contact[index].getNickName() << std::endl;
    std::cout << "Phone number: " << contact[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact[index].getDarkestSecret() << std::endl;
}

void    PhoneBook::searchContact()
{

    std::string search;
    int index_transform_to_int;
    displayContact();
    
    std::cout << "Enter contact index: " << std::endl;
    std::getline(std::cin, search);
    if (search.empty() || search.size() != 1 || !std::isdigit(search[0]), std::atoi(search.c_str()) > 7)
    {
        std::cout << "Error: Bad argument" << std::endl;
        return ;
    }
    index_transform_to_int = std::atoi(search.c_str());
    print_info_one_contact(index_transform_to_int);
}