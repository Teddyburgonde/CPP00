#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) 
{

}

PhoneBook::~PhoneBook(void) 
{

}

void    PhoneBook::print_menu(void)
{
    std::cout <<std::endl;
    std::cout << "*************************************\n"
                 "*                                   *\n"
                 "*              WELCOME              *\n"
                 "*              to the               *\n"
                 "*              Phone Book           *\n"
                 "*                                   *\n"
                 "*************************************\n"
                 "*                                   *\n"
                 "*      ADD - Add a new contact      *\n"
                 "*      SEARCH - Display all contact *\n"
                 "*      EXIT - Exit PhoneBook        *\n"
                 "*                                   *\n"
                 "*************************************\n" << std::endl;
}

void PhoneBook::displayContact(void) const
{
    // En-tête du tableau 
    std::cout <<std::endl;
    std::cout << "*********************************************\n"
                 "*                  Contacts                 *\n"
                 "*********************************************\n"
                 "|     index|first name| last name|  nickname|\n"
                 "|----------|----------|----------|----------|\n" << std::endl;
    for (size_t i = 0; i < 8; i++)
	{
	std::cout << "|         " << i << "|";
    }
}

