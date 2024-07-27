/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:06:50 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/27 12:06:53 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructor 
// Initialization
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
// return value name of the function associated with the Contact class
std::string Contact::getFirstName() const
{
    return _firstName;
}

std::string Contact::getLastName() const
{
    return _lastName;
}

std::string Contact::getNickName() const
{
    return _nickname;
}

std::string Contact::getPhoneNumber() const
{
    return _phoneNumber;
}

std::string Contact::getDarkestSecret() const 
{
    return _darkestSecret;
}

// SETTERS 

void    Contact::setFirstName(std::string n_FirstName)
{
    Contact::_firstName = n_FirstName;
}

void    Contact::setLastName(std::string n_LastName)
{
    Contact::_lastName = n_LastName;

}

void Contact::setNickname(std::string n_NickName)
{
    Contact::_nickname = n_NickName;
}

void Contact::setPhoneNumber(std::string n_phoneNumber)
{
    Contact::_phoneNumber = n_phoneNumber;
}

void    Contact::setDarkestSecret(std::string n_darkestSecret)
{
    Contact::_darkestSecret = n_darkestSecret;
}

