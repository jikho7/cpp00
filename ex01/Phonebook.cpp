#include "Contact.hpp"
#include "Phonebook.hpp"

 int Phonebook::_currentIndex = 0;

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
	return _ContactTab[index - 1];
}

void Phonebook::DisplayInfo(int index)
{

	if (index >=1 && index <=8)
		_ContactTab[index - 1].GetInfo();
	else
	{
		std::cout << "Index not valid " << std::endl;
	}
}

void Phonebook::DisplayContactByIndex(int index)
{
	if (index >= 1 && index <= 8)
	{
		_ContactTab[index - 1].GetContact(index);
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
	_ContactTab[(Phonebook::_currentIndex % 8)].SetContact();
	Phonebook::_currentIndex++;
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
