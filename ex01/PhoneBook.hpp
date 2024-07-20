#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

// Creation d'une class
class PhoneBook {
    
    public: // Je le met en public pour pouvoir utiliser ailleurs
    
    PhoneBook(void); // Constructeur
    ~PhoneBook(void); // Destructeur

    private:
    Contact _contacts[8]; // creation du tableau 

};

# endif
