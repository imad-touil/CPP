#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	bit = 8;
	public:
		Fixed();
		Fixed(const Fixed &other)
		~Fixed();
		int	getRawBits(void) const;
		void	steRawBits(int const raw);
};

#endif