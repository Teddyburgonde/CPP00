#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv) 
{
    // creation d'une string
    std::string string;

    if (argc < 2) 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *" << std::endl;// on ecris ce message si pas le bon nombre d'argument avec un '\n'
        return (1);
    }
    for(int i = 1; argv[i]; i++) 
    {
        string += argv[i]; // on parcours et on ajoute le contenu dans string
    }
    // on cree un iterateur du nom de iter , on le met = au pointeur qui pointe sur le debut de notre string
    // on dit que tant qu'il ne pointe pas vers la fin on incremente iterateur
    for(std::string::iterator iter = string.begin(); iter != string.end(); ++iter)
    {
        // change les caracteres en majuscule
        *iter = std::toupper(*iter);
    }
    // permet d'afficher la laveur de string sur la sorti standard 
    std::cout << string << std::endl;
}










