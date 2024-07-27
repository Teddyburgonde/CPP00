/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:06:58 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/27 12:07:01 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <cstdlib>
#include <string>
#include <iostream>

// Creation of the Contact class
class Contact {

    public:
    Contact(void); // Constructor
    ~Contact(void); // Destructors

    // Getters' signatures
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const ;
    std::string getDarkestSecret() const ;

    // Setters' signatures
    void    setFirstName(std::string n_FirstName);
    void    setLastName(std::string n_LastName);
    void    setNickname(std::string n_NickName);
    void    setPhoneNumber(std::string n_phoneNumber);
    void    setDarkestSecret(std::string n_darkestSecret);

    private:
    // Underscore is a naming convention to specify that it's in private.
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
};


#endif