## **CPP**

Hello world ! 🙂

```c
// librairie pour utiliser cout
#include <iostream>
// cout permet d'afficher sur la sortie standard
int main() {
    std::cout << "hello world !\n";
    return (0);
}

```
**Flags obligatoires**

```c
CFLAGS = -Wall -Wextra -Werror -std=c++98
```
**Compilation**

```c
g++ main.cpp 

```

**Comprendre ce que sait une Class**

```c

Une class c'est une structure personnalisé qui contient 2 choses :
- Des variables mais en cpp on appele cela des attributs.
- Des fonctions mais en cpp on appele cela des méthodes.

Une class permet de cree des objects.

```
![L’ordinateur veut se connecter a internet(5)](https://github.com/user-attachments/assets/1614d047-f76e-4776-9c7f-2072b1844fc1)

**Comment creer une Class**

```c
// le type puis le nom 
class PhoneBook {
    
    public: // Je le met en public pour pouvoir utiliser ailleurs
    
    PhoneBook(void); // Constructeur
    ~PhoneBook(void); // Destructeur

    private:
    Contact _contacts[8]; // creation du tableau 

```



