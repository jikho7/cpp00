#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
	Phonebook   Phonebook;
	std::string Choice;
	int index = 1;

	std::cout << "\n";
	std::cout << "\033[1mSelect one : \033[0m" << '\n' << '\n';
	std::cout << "\033[38;2;237;127;16m> ADD\033[0m" << '\n' << "\033[38;2;237;127;16m> SEARCH\033[0m" << '\n' << "\033[38;2;237;127;16m> EXIT\033[0m" << '\n' <<std::endl;
	while(1)
	{
		std::getline(std::cin, Choice);
		if (Choice.compare(0, 4, "ADD") == 0)
		{
			Phonebook.AddContact();
		}
		else if (Choice.compare(0, 7, "SEARCH") == 0)
		{
			std::cout << "_____________________________________________" << std::endl;
			std::cout << "|     \033[1;33mIndex\033[0m" << "|\033[1;33mFirst Name\033[0m" <<  "| \033[1;33mLast Name\033[0m" << "|  \033[1;33mNickname\033[0m|" << '\n';
			std::cout << "_____________________________________________" << std::endl;
			Phonebook.DisplayAllContact();
			std::cout << "_____________________________________________" << std::endl;
			std::cout << std::endl << "\033[1mEnter Index : \033[0m" <<std::endl;
			std::cin >> index;
			if (std::cin.fail())
			{
				std::cerr << "Index not valid" << std::endl;
				std::cin.clear();
			}
			else
				Phonebook.DisplayInfo(index);
		}
		else if (Choice.compare(0, 5, "EXIT") == 0)
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			std::cout << "\n";
			std::cout << "\033[1mSelect one : \033[0m" << '\n' << '\n';
			std::cout << "\033[38;2;237;127;16m> ADD\033[0m" << '\n' << "\033[38;2;237;127;16m> SEARCH\033[0m" << '\n' << "\033[38;2;237;127;16m> EXIT\033[0m" << '\n' <<std::endl;
		}
	}
	return (0);
}
