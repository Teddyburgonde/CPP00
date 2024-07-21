#include <iostream>
#include "Contact.hpp"

// Initialisation de la class Contact
// Initialisation se fait dans le Constructor
Contact::Contact() :
_firstName(""),
_lastName(""),
_nickname(""),
_phoneNumber(0),
_darkestSecret("")
{
    std::cout << "Constructor Called" << std::endl;
}

 Contact::~Contact() 
 {
    std::cout << "Destructor called" << std::endl;
 }










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
