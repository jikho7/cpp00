#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <cstring>
#include <cstdlib>

int main()
{
    PhoneBook PhoneBook;//T::T(const T&)
    std::string choice;
    int index = 1;
    int i = 1;

    while(1)
    {
        std::cout << std::endl;
        std::cout << "\033[1mSelect one : \033[0m" <<std::endl <<std::endl;
        std::cout << "DISPLAY Contact" <<std::endl << "ADD New Contact" <<std::endl << "SEARCH Contact" <<std::endl << "MODIFY Contact" <<std::endl << "EXIT" <<std::endl;
        if (choice.compare(0, 4, "ADD") == 0)
        {
            PhoneBook.AddContact();
            //PhoneBook.ContactTab[i].SetContact();
            i++;
        }
       else if (choice.compare(0, 8, "DISPLAY") == 0)
        {
           // PhoneBook.DisplayAllContact(index);
            PhoneBook.DisplayAllContact();
            std::cout << "Enter Index " <<std::endl;
            std::cin >> index;
            PhoneBook.DisplayInfo(index);
            //PhoneBook.DisplayContactByIndex(index);

        }
        else if (choice.compare(0, 6, "SEARCH") == 0)
        {
            std::cout << "Enter Index " <<std::endl;
            std::cin >> index;
            PhoneBook.DisplayContactByIndex(index);
            //PhoneBook.DisplayOneContact(index);
            //PhoneBook.ContactTab[index].GetContact();
        }
        else if (choice.compare(0, 5, "EXIT") == 0)
        {
            exit(EXIT_SUCCESS);
        }
        std::getline(std::cin, choice);
}
    return (0);
}