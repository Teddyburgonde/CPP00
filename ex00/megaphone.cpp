
#include <iostream> // Permet d'utiliser le cout 
#include <string> // Permet d'utiliser std::string
#include <cctype> // Permet d'utiliser islower et toupper

int main(int argc, char **argv) {
    // declaration de la string
    std::string str;

    // Si il y a pas le bon nombres d'arguments
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *\n";
        return (1);
    }
    // copie des valeurs
    for(int i = 1; argv[i]; i++) {
        str += argv[i];
    }
    for(int i = 0; str[i]; i++) {
        // Transforme le caractere en majuscule
        // imprime le contenu 
        std::cout << (char)toupper(str[i]);
    }
    //permet d'ajouter le '\n'
    std::cout << std::endl;
}










