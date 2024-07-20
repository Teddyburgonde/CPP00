#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    // je dois initialiser le contenu de la classe Contact
    std::cout << "Constructor called" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(void) {
    std::cout << "Destructor called" << std::endl;
    return ;
}
