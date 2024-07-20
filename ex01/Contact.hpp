#ifndef CONTACT_H
# define CONTACT_H

#include <string>

// Creation de la classe Contact avec les champs demandés
class Contact {
    // Underscore est une convention de nomage pour preciser que c'est en private.
    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phomeNumber;
    std::string _darkestSecret;
};


#endif