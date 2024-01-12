#ifndef Phonebook_H
#define Phonebook_H

#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Phonebook
{
    public:
        Phonebook();
        ~Phonebook();
        void DisplayAllContact();
        void AddContact();
        void DisplayInfo(int index);
        Contact& GetContactByIndex(int index);
        void DisplayContactByIndex(int index);

    private :
        Contact _ContactTab[9];
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
