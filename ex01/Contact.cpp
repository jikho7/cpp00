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
	if (this->_FirstName.empty())
		this->_FirstName = "-";
	this->_FirstName_r = FormatString(this->_FirstName);

	std::cout << "> Enter last name : " << std::endl;
	std::getline(std::cin, this->_LastName);
		if (this->_LastName.empty())
		this->_LastName = "-";
	this->_LastName_r = FormatString(this->_LastName);

	std::cout << "> Enter nickname : " << std::endl;
	std::getline(std::cin, this->_Nickname);
		if (this->_Nickname.empty())
		this->_Nickname = "-";
	this->_Nickname_r = FormatString(this->_Nickname);

	std::cout << "> Enter phone number : " << std::endl;
	std::getline(std::cin, this->_PhoneNumber);
		if (this->_PhoneNumber.empty())
		this->_PhoneNumber = "-";

	std::cout << "> Enter darkest secret : " << std::endl;
	std::getline(std::cin, this->_DarkestSecret);
		if (this->_DarkestSecret.empty())
		this->_DarkestSecret = "-";

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

void Contact::GetContact() const
{


	std::cout << "|" <<std::setw(10) << Index << "|" <<std::setw(10) << _FirstName_r << "|" <<std::setw(10) << _LastName_r
			  << "|" <<std::setw(10) << _Nickname_r << "|" << std::endl;
}
