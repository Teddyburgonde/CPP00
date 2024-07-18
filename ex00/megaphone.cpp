
#include <iostream> // Permet d'utiliser le cout 
#include <string> // Permet d'utiliser std::string
#include <cctype> // Permet d'utiliser islower et toupper

int main(int argc, char **argv) {
    std::string str;
    // Si il y a pas le bon nombres d'arguments
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *\n";
        return (1);
    }
    // copie des valeurs
    str = argv[1];
    
    toupper(str);
    std::cout << str;
    // // permet d'ajouter le '\n'
    // std::cout << std::endl;
}












