#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
    PhoneBook   PhoneBook;
    std::string Choice;
    int index = 1;

    std::cout <<std::endl;
    std::cout << "\033[1mSelect one : \033[0m" << '\n' <<std::endl;
    std::cout << "\033[38;2;237;127;16m> ADD\033[0m" <<std::endl << "\033[38;2;237;127;16m> SEARCH\033[0m" <<std::endl << "\033[38;2;237;127;16m> EXIT\033[0m" <<std::endl <<std::endl;
    while(1)
    {
        std::getline(std::cin, Choice);
        if (Choice.compare(0, 4, "ADD") == 0)
        {
            PhoneBook.AddContact();
        }
        else if (Choice.compare(0, 7, "SEARCH") == 0)
        {
            PhoneBook.DisplayAllContact();
            std::cout << std::endl << "\033[1mEnter Index : \033[0m" <<std::endl;
            std::cin >> index;
            if (std::cin.fail()) {
                std::cerr << "Index not valid" << std::endl;
                std::cin.clear();
            }
            else
                PhoneBook.DisplayInfo(index);
        }
        else if (Choice.compare(0, 5, "EXIT") == 0)
        {
            exit(EXIT_SUCCESS);
        }
        else
        {
            std::cout <<std::endl;
            std::cout << "\033[1mSelect one : \033[0m" << '\n' <<std::endl;
            std::cout << "\033[38;2;237;127;16m> ADD\033[0m" <<std::endl << "\033[38;2;237;127;16m> SEARCH\033[0m" <<std::endl << "\033[38;2;237;127;16m> EXIT\033[0m" <<std::endl <<std::endl;
        }
    }
    return (0);
}