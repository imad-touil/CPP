#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	pb1;
	std::string	command;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!getline(std::cin, command))
			exit(0);
		if (command == "ADD")
			pb1.Add();
		else if (command == "SEARCH")
			pb1.Search();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "No No, Use:    👇 ||  👇  || 👇\n";
	}
}
