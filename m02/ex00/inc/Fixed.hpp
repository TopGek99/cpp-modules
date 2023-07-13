#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed &old);
		Fixed &operator=(Fixed &num);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed();
	private:
		int value;
		static const int bits = 8;
};

#endif