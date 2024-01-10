#ifndef PHONEBOOK_H
#define PHONEBOOk_H

#include <iostream>
#include <cstring>
#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        PhoneBook(const PhoneBook&); // Constructeur de copie, si pas d alloc dynamique, laisser par defaut
        void DisplayAllContact();
        void AddContact();
        void DisplayInfo(int index);
       // void SearchContact(void);
        void ModifyContact(void);
        Contact& GetContactByIndex(int index);
        void DisplayContactByIndex(int index);

    private :
        Contact ContactTab[8];

};

// class Adresse {
// public:
//     std::string rue;
//     int numero;

//     Adresse(const std::string& r, int num) : rue(r), numero(num) {}
// };
#endif

/*
class T
{
    public:
        T (); // Constructeur par défaut
        T (const T&); // Constructeur de recopie
        ~T (); // Destructeur éventuellement virtuel
        T &operator=(const T&); // Operator d'affectation
};*/