/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 00:12:52 by imatouil          #+#    #+#             */
/*   Updated: 2026/02/23 02:10:23 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// class Animal
// {
// 	public:
// 		bool alive;
// 		void	eat()
// 		{
// 			std::cout << "This animal is eating!\n";
// 		}
// 	private:
// 		int	age;
// 	protected:
// 		int	tol;
// };

// class Cat : private Animal
// {
// 	public:
// 		void sayType(){
// 			std::cout << "This is Cat\n";
// 		}
// 		void	setAge()
// 		{
// 			tol = 1337;
// 		}
// 		int	getTol()
// 		{
// 			return (tol);
// 		}
// };

class test
{
	int	age;
	std::string name;
};

int	main(void)
{
	// Cat cat;
	// Animal A;

	// std::cout << cat.alive << std::endl;
	// cat.eat();
	// cat.setTol();
	// std::cout << cat.getTol() << std::endl;

	// test T;
	// T.name = "emad\n";
}

class Base {
  public:
    int x;
  protected:
    int y;
  private:
    int z;
};

class PublicDerived: public Base {
  // x is public
  // y is protected
  // z is not accessible from PublicDerived
};

class ProtectedDerived: protected Base {
  // x is protected
  // y is protected
  // z is not accessible from ProtectedDerived
};

class PrivateDerived: private Base {
  // x is private
  // y is private
  // z is not accessible from PrivateDerived
};