#include <iostream>
#include "Contact.hpp"

// Constructor 
// Initialisation de la class se fait dans le Constructor
Contact::Contact()
{
    _firstName     = "";
    _lastName      = "";
    _nickname      = "";
    _phoneNumber   = "";
    _darkestSecret = "";
}

// Destructor
Contact::~Contact() 
{
    
}


//Contact contacts[1];
// contacts[0].set_first_name("John");
// apres un std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
// il devriat m'afficher ceci



// GETTERS
// std::string Contact::get_first_name() const {
//     return _first_name;
//}



// SETTERS





// Contact::Contact() :
//     _firstName(""),
//     _lastName(""),
//     _nickname(""),
//     _phoneNumber(0),
//     _darkestSecret("") 
//     {
//         std::cout << "Constructor called" << std::endl;
//     }
//
// }
