// Cree fonction display
// Cree la fonction ADD //!Finish
// Pouvoir remplacer le plus ancien par le dernier contact ajouter.
// Cree la fonction search 
// exit //! Finish 
// getline //! Finish 

//std::cout << "first name: " << contact.getFirstName() << std::endl;

// GETTERS
// std::string Contact::get_first_name() const {
//     return _first_name;
//}

//Contact contacts[1];
// contacts[0].set_first_name("John");

// apres un std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
// il devriat m'afficher ceci

// while (getline(std::cin, s))

#include "PhoneBook.hpp"
#include "Contact.hpp"


int main()
{
    PhoneBook phone; // creation d'un instance(un objet) phone
    std::string commands;
    //phone.print_menu();
    phone.displayContact();
    while (1)
    {
        phone.print_menu();
        if (std::cin.eof() == 1)
            return (1); 
        std::cout << "> ";
        std::getline(std::cin, commands);
        if (commands == "add")
            phone.addNewContact();
        else if (commands == "exit")
        {
            std::cout << "See you soon" << std::endl;
            break;
        }
        else
            std:: cout << "Error: you have to choose between add , search and exit" << std::endl;
    }
}
