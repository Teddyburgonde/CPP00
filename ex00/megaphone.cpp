
#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv) {
    std::string str;
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *\n";
        return (1);
    }
    for(int i = 1; argv[i]; i++) {
        str += argv[i];
    }
    for(int i = 0; str[i]; i++) {
        std::cout << (char)toupper(str[i]);
    }
    std::cout << std::endl;
}










