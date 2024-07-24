#ifndef CONTACT_H
# define CONTACT_H

#include <string>

// Creation de la classe Contact avec les champs demandés
class Contact {
    // Underscore est une convention de nomage pour preciser que c'est en private.

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