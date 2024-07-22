#include <iostream>

void    print_message_accueil(void)
{
    std::cout <<std::endl;
    std::cout << "*************************************\n"
                 "*                                   *\n"
                 "*               WELCOME             *\n"
                 "*               to the              *\n"
                 "*              Phone Book           *\n"
                 "*************************************\n"
                 "*                                   *\n"
                 "*      ADD - Add a new contact      *\n"
                 "*      SEARCH - Display a contact   *\n"
                 "*      EXIT - Exit PhoneBook        *\n"
                 "*                                   *\n"
                 "*************************************\n" << std::endl;
}


int main()
{
    print_message_accueil();
}