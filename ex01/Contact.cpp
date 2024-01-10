#include "Contact.hpp"
#include "Phonebook.hpp"
#include <cstring>
#include <iomanip>

Contact::Contact() {
    PhoneNumber = "";
    DarkestSecret = "";
    Nickname = "";
    LastName = "";
    FirstName = "";
}

//Contact::Contact()
//{
   //// std::cout << "Contact constructor" << std::endl;
    //return;
//}

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
    std::cout << std::endl;
    std::cout << "Enter first name : " << std::endl;
    std::cin >> this->FirstName;
    this->FirstName = FormatString(this->FirstName);
    
    std::cout << "Enter last name : " << std::endl;
    std::cin >> this->LastName;
    this->LastName = FormatString(this->LastName);

    std::cout << "Enter nickname : " << std::endl;
    std::cin >> this->Nickname;
    this->Nickname = FormatString(this->Nickname);

    //std::cout << "Enter phone number : " << std::endl;   
    //std::cin >> this->PhoneNumber; 
    //std::cout << "Enter darkest secret : " << std::endl;
    //std::cin >> this->DarkestSecret;
    std::cout << std::endl;
    std::cout << "\033[1;33mContact Added\033[0m " <<std::endl;
}

std::string Contact::FormatString(const std::string& str)
{
    std::string NewStr = str;
    
    if (NewStr.length() > 10)
    {
        NewStr = str.substr(0, 9) + '.';
        //std::cout << "new string " <<  NewStr <<std::endl;
    }
    return NewStr;
}

void Contact::GetInfo()
{
    std::cout << "First Name : " << FirstName << std::endl;
    std::cout << "Last Name : " << LastName << std::endl;
    std::cout << "Nickname : " << Nickname << std::endl;
    std::cout << "Phone Number : " << PhoneNumber << std::endl;
    std::cout << "Darkest Secret : " << DarkestSecret << std::endl;
}

void Contact::GetContact() const
{
    std::cout << "| Index : " <<std::setw(3) << Index << " | First Name : " <<std::setw(10) << FirstName << " | Last Name : " <<std::setw(10) << LastName
              << " | Nickname : " <<std::setw(10) << Nickname << std::endl;
}

//index, first name, last name et nickname