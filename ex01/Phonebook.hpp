#ifndef PHONEBOOK_H
#define PHONEBOOk_H

#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        PhoneBook(const PhoneBook&); // Constructeur de copie, si pas d alloc dynamique, laisser par defaut
        void DisplayAllContact();
        void AddContact();
        void DisplayInfo(int index);
        Contact& GetContactByIndex(int index);
        void DisplayContactByIndex(int index);

    private :
        Contact ContactTab[9];

};

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