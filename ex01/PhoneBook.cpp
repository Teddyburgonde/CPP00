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
                 "*               WELCOME             *\n"
                 "*               to the              *\n"
                 "*              Phone Book           *\n"
                 "*************************************\n"
                 "*                                   *\n"
                 "*      ADD - Add a new contact      *\n"
                 "*      SEARCH - Display all contact *\n"
                 "*      EXIT - Exit PhoneBook        *\n"
                 "*                                   *\n"
                 "*************************************\n" << std::endl;
}

void    PhoneBook::displayContact(void) const
{
    // Contact Display
    //---------------
    //|    index|     first name...
    //---------------

    // 4 colonnes separer par des | , 10 caracteres (entre les |), aligné a droite
    // index, first name, last name, nickname
}
