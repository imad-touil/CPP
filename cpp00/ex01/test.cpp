#include <iostream>
#include <iomanip>

int main(void)
{
	int	size;
    std::string tmp;

    tmp = "Hello";
	std::cout << "--------------------------------------------------------\n";
    std::cout << "|   Index  |First Name| Last Name| Nickname | phonenbr |\n";
    std::cout << "--------------------------------------------------------\n";
	// size = 8;
	// if (counter < 8)
	// 	size = counter;
	for (int i = 0; i < 8; i++)
	{
        std::cout << "|" << std::setw(10) << i;
		for (int j = 0; j < 4; j++)
        	std::cout << "|" << std::setw(10) << tmp;
        std::cout << "|\n";
	}
    std::cout << "--------------------------------------------------------\n";
	
}
