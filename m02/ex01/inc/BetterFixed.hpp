#ifndef BETTERFIXED_HPP
#define BETTERFIXED_HPP

#include <string>
#include <iostream>

class BetterFixed {
	public:
		BetterFixed();
		BetterFixed(BetterFixed &old);
		BetterFixed(int const val);
		BetterFixed(float const val);
		void operator=(BetterFixed &num);
		int getRawBits(void);
		void setRawBits(int const raw);
		float toFloat(void);
		int toInt(void);
		~BetterFixed();
	private:
		int value;
		static const int bits = 8;
};

#endif