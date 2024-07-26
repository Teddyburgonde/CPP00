// std::cout << "Error: you have to choose between add , search and exit" << std::endl;


#include "PhoneBook.hpp"
#include "Contact.hpp"


int main()
{
    PhoneBook phone; // creation d'un instance(un objet) phone
    std::string commands;
    int index;

    index = 0;
    phone.print_welcome();
    while (1)
    {
        phone.print_choice_menu();
        if (std::cin.eof() == 1)
            return (1); 
        std::cout << "> ";
        std::getline(std::cin, commands);
        if (commands == "ADD")
            phone.addNewContact();
        else if (commands == "SEARCH")
            phone.searchContact();
        else if (commands == "EXIT")
        {
            std::cout << "See you soon" << std::endl;
            break;
        }
        std::cout << "Error: you have to choose between add , search and exit" << std::endl;
    }
}
