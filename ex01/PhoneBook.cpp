#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) 
{
    index = 0;
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

std::string printFormatForDisplayContact(std::string str)
{
    std::string tmp;

    // si la string est inferieur a 10 par exemple dany
    if (str.length() <= 10)
    {
        // i commence a 4 quuand il arrive a 10 on ecris un espace
        // donc i = 4 puis il vas jusqua 10 donc il avance de 6 cases et donc a la 6 eme case du tableau on ecris un espace
        // et le reste du tableau on rajoute str , c'est a dire dany ce qui va donner |      dany|
        for (int i = str.length(); i < 10; i++)
            tmp += " ";
        tmp += str;
    }
    else
    {
        // la on met tmp (danyyyyyyyyyyyyyyyyyy) dans le tableau
        tmp = str;
        tmp.resize(9); // on le reduis a 9 danyyyyyy
        tmp += "."; // et on lui rajoute un . a la fin danyyyyyy.
    }
    return (tmp);
}



void PhoneBook::displayContact(void) const
{
    // En-tête du tableau 
    std::cout <<std::endl;
    std::cout << "*********************************************" <<std::endl;
    std::cout << "*                  Contacts                 *" <<std::endl;
    std::cout << "*********************************************" <<std::endl;
    std::cout << "|     index|first name| last name|  nickname|" <<std::endl;
    std::cout << "|----------|----------|----------|----------|" <<std::endl;
    // boucle pour afficher les colonnes
    for (size_t i = 0; i < 8; i++)
	{
	    std::cout << "|         " << i;
        std::cout << "|" << printFormatForDisplayContact(contact[i].getFirstName());
        std::cout << "|" << printFormatForDisplayContact(contact[i].getLastName());
        std::cout << "|" << printFormatForDisplayContact(contact[i].getNickName());
        std::cout << "|         " << std::endl;
    }
}

void    PhoneBook::addNewContact()
{
    // Declaration des variables
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
    // On envoie un prompt 
    // On renvoie l'entrer standard dans la variable firstName;


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

    std::cout << "Enter darkestSecret: ";
    std::getline(std::cin, darkestSecret);
    if (!darkestSecret[0] || std::cin.eof())
	{
		std::cout << std::endl << "Error : You have left a field blank." << std::endl;
		return ;
	}
    
    //On stock les informations dans le tableau contact
    contact[index].setFirstName(firstName);
    contact[index].setLastName(lastName);
    contact[index].setNickname(nickname);
    contact[index].setPhoneNumber(phoneNumber);
    contact[index].setDarkestSecret(darkestSecret);


    // Si il y a deja 8 contact cela veut dire
    // que le tableau est plein et donc on remet index a 0
    if (index == 7)
        index = 0;
    else
        index++; // les informations sur les contacts ne mettrons a la suite
}


