#include <iostream>

class A
{
	public:
		void	hello()
		{
			std::cout << "Hello From A\n";
		}
};

class B : virtual public A {};
class C : virtual public A {};

class D : public C, public B {};

int	main(void)
{
	D d;

	d.hello();
}
