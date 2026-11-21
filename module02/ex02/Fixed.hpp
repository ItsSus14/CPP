#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed{
	private:
		int _rawBits;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed(int rawBits);
		Fixed(float rawBits);
		Fixed &operator=(const Fixed &fixed);
		int getRawBits()const;
		void setRawBits(int const rawBits);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator<(const Fixed& fixed) const;
		bool operator>(const Fixed& fixed) const;
		bool operator==(const Fixed& fixed) const;
		bool operator<=(const Fixed& fixed) const;
		bool operator>=(const Fixed& fixed) const;
		bool operator!=(const Fixed& fixed) const;
		Fixed operator+(const Fixed& fixed) const;
		Fixed operator-(const Fixed& fixed) const;
		Fixed operator*(const Fixed& fixed) const;
		Fixed operator/(const Fixed& fixed) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);

#endif
