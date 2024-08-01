/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:07:40 by tebandam          #+#    #+#             */
/*   Updated: 2024/07/30 13:32:40 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
    
    public:
    
    PhoneBook(void);
    ~PhoneBook(void); 
    

    public:
    void    addNewContact();
    void    searchContact();
    void    print_welcome(void);
    void    print_choice_menu(void);


    private:
	int		index; 
    Contact contact[8];
    
    private:
    void    displayContact(void) const;
    void    print_info_one_contact(int index);
};

# endif
