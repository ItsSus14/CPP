#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{
	private:
		int _rawBits;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		int getRawBits()const;
		void setRawBits(int const rawBits);
	
};

#endif
