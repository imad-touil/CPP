#include <iostream>
using namespace std;

void    print(int i);
void    print(unsigned int i);

int main(void)
{
    int i = 42;
    unsigned int j = 1337;
    print(i);
    print(j);
}

void    print(int i)
{
    cout << i << endl;
}

void    print(unsigned int j)
{
    cout << j << endl;
}