#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
#include "Contact.hpp"

// Creation d'une class
class PhoneBook {
    
    public: // Je le met en public pour pouvoir utiliser ailleurs
    
    PhoneBook(void); // Constructeur
    ~PhoneBook(void); // Destructeur
    
    // ce qu'on m'a dit de creer 
    void addNewContact();
    void searchContact();


    void    displayContact(void) const;
    void    print_menu(void);
    

    private:
	int		index; 
    Contact contact[8]; // creation du tableau 

};

# endif
