#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed &old);
		Fixed &operator=(const Fixed &num);
		void complain(std::string level);
		~Fixed();
	private:
		int value;
		static const int bits = 8;
};

#endif