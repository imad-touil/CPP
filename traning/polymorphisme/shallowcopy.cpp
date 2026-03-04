#include <iostream>
#include <cstring>

class Student
{
	private:
		char *name;
	public:
	Student(const char *n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	Student(const Student& obj)
	{
		// name = obj.name; // shallow copy
		name = new char[strlen(obj.name) + 1]; // Deep Copy
		strcpy(name, obj.name); // Deep Copy
	}
	void	setName(const char *n)
	{
		strcpy(name, n);
	}
	void	displayName()
	{
		std::cout << name << std::endl;
	}
	~Student()
	{
		std::cout << "Destructor called\n";
		delete name;
	}
};

void	ll()
{
	system("leaks -q a.out");
}

int	main(void)
{
	atexit(ll);
	Student s1("Emad");
	s1.displayName();

	Student s2 = s1;
	s2.displayName();
	s1.setName("Touil");
	s1.displayName();
	s2.displayName();
}
