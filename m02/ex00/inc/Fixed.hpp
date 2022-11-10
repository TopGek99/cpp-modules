#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed &old);
		void operator=(Fixed &num);
		int getRawBits(void);
		void setRawBits(int const raw);
		~Fixed();
	private:
		int value;
		static const int bits = 8;
};

#endif