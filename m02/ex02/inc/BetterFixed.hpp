 #ifndef BETTERFIXED_HPP
#define BETTERFIXED_HPP

#include <iostream>
#include <cmath>

class BetterFixed {
	public:
		BetterFixed();
		BetterFixed(const BetterFixed &old);
		BetterFixed(int const val);
		BetterFixed(float const val);
		BetterFixed &operator=(const BetterFixed &num);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		~BetterFixed();
	private:
		int value;
		static const int bits = 8;
};

std::ostream& operator<< (std::ostream& stream, const BetterFixed& Fixed);

#endif