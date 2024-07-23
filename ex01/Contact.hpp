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
    std::string _phoneNumber;
    std::string _darkestSecret;

    public:
    Contact(void); // Constructeur
    ~Contact(void); // Destructeur

    // Signatures des Getters
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const ;
    std::string getDarkestSecret() const ;

    // Signatures des Setters
    void    Contact::setFirstName(std::string n_FirstName);
    void    Contact::setLastName(std::string n_LastName);
    void    Contact::setNickname(std::string n_NickName);
    void    Contact::setPhoneNumber(std::string n_phoneNumber);
    void    Contact::setDarkestSecret(std::string n_darkestSecret);
};


#endif