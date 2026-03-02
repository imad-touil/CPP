#include <iostream>
#define print(var) std::cout << var << std::endl;

class Base
{
	public:
		virtual void	display()
		{
			print("Hello From Base");
		}
};

class Derived : public Base
{
	public:
		void	display()
		{
			print("Hello From Derived");
		}
};

int	main(void)
{
	Base	*basePTR;
	Derived	derivedOBJ;

	basePTR = &derivedOBJ;
	
	basePTR->display();
	derivedOBJ.display();
}
