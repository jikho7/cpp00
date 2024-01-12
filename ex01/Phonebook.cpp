#include "Contact.hpp"
#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	return;
}

Phonebook::~Phonebook()
{
	return;
}

Contact& Phonebook::GetContactByIndex(int index)
{
	return _ContactTab[index];
}

void Phonebook::DisplayInfo(int index)
{

	if (index >=1 && index <=8)
		_ContactTab[index].GetInfo();
	else
	{
		std::cout << "Index not valid " << std::endl;
	}
}

void Phonebook::DisplayContactByIndex(int index)
{
	_ContactTab[index].Index = index;
	if (index >= 1 && index <= 8)
	{
		_ContactTab[index].GetContact();
	}
	else
	{
		std::cout << "Index not valid " << std::endl;
	}
}

void Phonebook::DisplayAllContact()
{
	int i;

	for (i = 1; i <= 8; i++)
	{
		DisplayContactByIndex(i);
	}
	return;
}

void Phonebook::AddContact()
{
	static int currentIndex = 0;

	_ContactTab[(currentIndex % 8) + 1].SetContact();
	currentIndex++;
}

//Phonebook::

/*
	Prototype de l'opérateur d'affectation
		T& T::operator=(const T&)
	Prototype du constructeur de recopie
		T::T(const T&)
	Prototype de l'opérateur d'affectation
		T& T::operator=(const T&)
*/
