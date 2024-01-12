#include <ios>
#include <iostream>

int main(int ac, char** av)
{
	int i;
	int j = 0;
	char c;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c = std::toupper(av[i][j]);
			std::cout << c;
		}
	}
	std::cout <<std::endl;
	return(0);
}

