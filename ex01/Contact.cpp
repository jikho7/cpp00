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
    std::cout << std::endl << "Enter first name : " << std::endl;
    std::getline(std::cin, this->FirstName);
    this->FirstName_r = FormatString(this->FirstName);
    
    std::cout << "Enter last name : " << std::endl;
    std::getline(std::cin, this->LastName);
    this->LastName_r = FormatString(this->LastName);

    std::cout << "Enter nickname : " << std::endl;
    std::getline(std::cin, this->Nickname);
    this->Nickname_r = FormatString(this->Nickname);

    std::cout << "Enter phone number : " << std::endl;   
    std::getline(std::cin, this->PhoneNumber);

    std::cout << "Enter darkest secret : " << std::endl;
    std::getline(std::cin, this->DarkestSecret);

    std::cout << std::endl;
    std::cout << "\033[1;33mContact Added\033[0m " <<std::endl <<std::endl;
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
    std::cout << "First Name : " << FirstName << std::endl;
    std::cout << "Last Name : " << LastName << std::endl;
    std::cout << "Nickname : " << Nickname << std::endl;
    std::cout << "Phone Number : " << PhoneNumber << std::endl;
    std::cout << "Darkest Secret : " << DarkestSecret << std::endl;
}

void Contact::GetContact() const
{
    std::cout << "| Index : " <<std::setw(3) << Index << " | First Name : " <<std::setw(10) << FirstName_r << " | Last Name : " <<std::setw(10) << LastName_r
              << " | Nickname : " <<std::setw(10) << Nickname_r << " |" << std::endl;
}