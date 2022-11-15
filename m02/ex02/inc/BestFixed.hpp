#ifndef BEstFIXED_HPP
#define BEstFIXED_HPP

#include <iostream>
#include <cmath>

class BestFixed {
	public:
		BestFixed();
		BestFixed(const BestFixed &old);
		BestFixed(int const val);
		BestFixed(float const val);
		BestFixed &operator=(const BestFixed &num);
		bool operator>(const BestFixed &num);
		bool operator<(const BestFixed &num);
		bool operator>=(const BestFixed &num);
		bool operator<=(const BestFixed &num);
		bool operator==(const BestFixed &num);
		bool operator!=(const BestFixed &num);
		BestFixed operator+(const BestFixed &num) const;
		BestFixed operator-(const BestFixed &num) const;
		BestFixed operator*(const BestFixed &num) const;
		BestFixed operator/(const BestFixed &num) const;
		BestFixed &operator++(void) const;
		BestFixed operator++(int plus) const;
		BestFixed &operator--(void) const;
		BestFixed operator--(int minus) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		~BestFixed();
	private:
		int value;
		static const int bits = 8;
};

std::ostream& operator<< (std::ostream& stream, const BestFixed& Fixed);

#endif