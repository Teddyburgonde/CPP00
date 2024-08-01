/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:06:58 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/30 14:16:19 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <cstdlib>
#include <string>
#include <iostream>

class Contact {

    public:
    Contact(void);
    ~Contact(void);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const ;
    std::string getDarkestSecret() const ;

    void    setFirstName(std::string n_FirstName);
    void    setLastName(std::string n_LastName);
    void    setNickname(std::string n_NickName);
    void    setPhoneNumber(std::string n_phoneNumber);
    void    setDarkestSecret(std::string n_darkestSecret);

    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
};


#endif