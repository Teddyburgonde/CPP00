// Cree fonction display

// Cree la fonction ADD
// Pouvoir remplacer le plus ancien par le dernier contact ajouter.
// Cree la fonctions search 
// exit 

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

#include "PhoneBook.cpp"
#include "Contact.cpp"

int main()
{
    PhoneBook phone; // creation d'un instance(un objet) phone
    //phone.print_menu();
    phone.displayContact();
    return (0);
}
