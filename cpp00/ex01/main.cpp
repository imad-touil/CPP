#include "PhoneBook.hpp"
#include "Contact.hpp"


int main(void)
{
    PhoneBook   pb1;

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
        pb1.AddContact();
    }
    pb1.DisplayTable();
}
