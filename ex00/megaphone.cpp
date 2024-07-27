#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv) 
{
    std::string string;

    if (argc < 2) 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOIS *" << std::endl;
        return (1);
    }
    for(int i = 1; argv[i]; i++)
        string += argv[i];
    for(std::string::iterator iter = string.begin(); iter != string.end(); ++iter)
        *iter = std::toupper(*iter);
    std::cout << string << std::endl;
    return (0);
}










