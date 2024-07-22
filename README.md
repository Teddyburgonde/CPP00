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

**Comprendre ce que sait une class**

```c

Une class c'est une structure personnalisé qui contient 2 choses :
- Des variables mais en cpp on appele cela des attributs.
- Des fonctions mais en cpp on appele cela des méthodes.

Une class permet de cree des objects.

```
![L’ordinateur veut se connecter a internet(5)](https://github.com/user-attachments/assets/1614d047-f76e-4776-9c7f-2072b1844fc1)

**Comment creer une class**

```c
// le type puis le nom 
class PhoneBook {
    
    public: // Je le met en public pour pouvoir utiliser ailleurs
    
    PhoneBook(void); // Constructeur
    ~PhoneBook(void); // Destructeur

    private:
    Contact _contacts[8]; // creation du tableau
};

```

**C'est quoi un construteur ?**

```c
Un constructeur permet d'initialiser les attributs(les variables) de la classe lors de la création d'un objet.
```

**C'est quoi un destructeur ?**

```c
Un destructeur permet de liberer la memoire dun object.
Il s'utile avec la fonction delete.
```

**GETTERS**

```c
C'est une méthode (fonction) qui retournent la valeur d'un attribut privé.
Elle permet d'accéder à ces attributs depuis l'extérieur de la classe.
const a la fin permet de garantir que l'objet ne sera pas modifier.
Exemple : 
std::string get_first_name() const;
```

**SETTERS**

```c
Setters : Méthodes qui permettent de modifier la valeur d'un attribut privé. Elles contrôlent la façon dont ces attributs peuvent être modifiés.
Exemple :
int set_first_name(std::string first_name);
```


