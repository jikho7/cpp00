#include "Contact.hpp"
#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
    //std::cout << "PhoneBook Construtor" <<std::endl;
    return;
}

PhoneBook::~PhoneBook()
{
    return;
}

Contact& PhoneBook::GetContactByIndex(int index)
{
    return ContactTab[index];
}

void PhoneBook::DisplayInfo(int index)
{
    ContactTab[index].GetInfo();
}

void PhoneBook::DisplayContactByIndex(int index)
{
    ContactTab[index].Index = index;
    if (index >= 1 && index <=8)
    {
        ContactTab[index].GetContact();
    }
    else
    {
        std::cout << "Invalid index " << std::endl;
    }
}

void PhoneBook::DisplayAllContact()
{
    int i;

    for (i = 1; i < 8; i++)
    {
        DisplayContactByIndex(i);
    }
    return;
}


void PhoneBook::AddContact()
{
    static int currentIndex = 0;

    ContactTab[(currentIndex % 7) + 1].SetContact();
    currentIndex++;
}

//PhoneBook::

/*
    Prototype de l'opérateur d'affectation
        T& T::operator=(const T&)
    Prototype du constructeur de recopie
        T::T(const T&)
    Prototype de l'opérateur d'affectation
        T& T::operator=(const T&)
*/