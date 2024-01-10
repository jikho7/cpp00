#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

int main()
{
    PhoneBook PhoneBook;//T::T(const T&)
    std::string choice;
    int index = 1;

    while(1)
    {
        std::cout <<std::endl;
        std::cout << "\033[1mSelect one : \033[0m" << '\n' <<std::endl;
        std::cout << "\033[38;2;237;127;16m> ADD\033[0m" <<std::endl << "\033[38;2;237;127;16m> SEARCH\033[0m" <<std::endl << "\033[38;2;237;127;16m> EXIT\033[0m" <<std::endl <<std::endl;
        if (choice.compare(0, 4, "ADD") == 0)
        {
            PhoneBook.AddContact();
        }
        else if (choice.compare(0, 7, "SEARCH") == 0)
        {
           // PhoneBook.DisplayAllContact(index);
            PhoneBook.DisplayAllContact();
            std::cout << "Enter Index " <<std::endl;
            std::cin >> index;
            std::cout << index << std::endl;
            if (std::cin.fail()) {
                std::cerr << "Erreur : la saisie n'est pas un entier valide." << std::endl;
                std::cin.clear();
            } 
            else {
        // Afficher l'entier si la lecture a réussi
                std::cout << "Vous avez saisi : " << index << std::endl;
    }
                PhoneBook.DisplayInfo(index);
        }
        else if (choice.compare(0, 5, "EXIT") == 0)
        {
            exit(EXIT_SUCCESS);
        }
        std::getline(std::cin, choice);
    }
    return (0);
}