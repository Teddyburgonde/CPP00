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
