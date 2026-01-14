#include <iostream>

void	increment(int &ref)
{
	ref++;
}

int	main(void)
{
	int x = 45;
	int &ref = x;
	// int *ptr = &x;



	x = 1337;
	printf("ref ==>> %d\n", ref);
	printf("x   ==>> %d\n", x);
	increment(ref);
	printf("ref ==>> %d\n", ref);
	printf("x   ==>> %d\n", x);
}