#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact()
{
	;
}

Contact::~Contact()
{
	return;
}

Contact::Contact(const Contact&)
{
	return;
}

void Contact::SetContact()
{
	std::cout << '\n' << "> Enter first name : " << std::endl;
	std::getline(std::cin, this->_FirstName);

	std::cout << "> Enter last name : " << std::endl;
	std::getline(std::cin, this->_LastName);

	std::cout << "> Enter nickname : " << std::endl;
	std::getline(std::cin, this->_Nickname);

	std::cout << "> Enter phone number : " << std::endl;
	std::getline(std::cin, this->_PhoneNumber);

	std::cout << "> Enter darkest secret : " << std::endl;
	std::getline(std::cin, this->_DarkestSecret);

	std::cout << '\n';
	std::cout << "\033[1;33mContact Added\033[0m " << '\n' << std::endl;
}

std::string Contact::FormatString(const std::string& str)
{
	std::string NewStr = str;

	if (NewStr.length() > 10)
	{
		NewStr = NewStr.substr(0, 9) + '.';
	}
	return NewStr;
}

void Contact::GetInfo() const
{
	std::cout << "First Name : " << _FirstName << '\n';
	std::cout << "Last Name : " << _LastName << '\n';
	std::cout << "Nickname : " << _Nickname << '\n';
	std::cout << "Phone Number : " << _PhoneNumber << '\n';
	std::cout << "Darkest Secret : " << _DarkestSecret << std::endl;
}

void Contact::GetContact(int Index) const
{
	std::string FirstName_r = _FirstName;
	std::string LastName_r = _LastName;
	std::string Nickname_r = _Nickname;

	if (FirstName_r.empty())
		FirstName_r = "-";
	if (FirstName_r.length() > 10)
	{
		FirstName_r = FirstName_r.substr(0, 9) + '.';
	}

	if (LastName_r.empty())
		LastName_r = "-";
	if (LastName_r.length() > 10)
	{
		LastName_r = LastName_r.substr(0, 9) + '.';
	}

	if (Nickname_r.empty())
		Nickname_r = "-";
	std::cout << "|" <<std::setw(10) << Index << "|" <<std::setw(10) << FirstName_r << "|" <<std::setw(10) << LastName_r
			  << "|" <<std::setw(10) << (Nickname_r.length() > 10 ? Nickname_r.substr(0,9) + "." : Nickname_r) << "|" << std::endl;
}
