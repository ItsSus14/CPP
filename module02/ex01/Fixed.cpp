#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _rawBits(fixed._rawBits)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int rawBits)
{
	_rawBits = rawBits * (1 << _fractionalBits);
}

Fixed::Fixed(float rawBits)
{
	_rawBits = roundf(rawBits * (1 << _fractionalBits));	
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other)
		this->_rawBits = other._rawBits;
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}

void	Fixed::setRawBits(int const rawBits)
{
	_rawBits = rawBits;
}

float	Fixed::toFloat(void) const
{
	return (float)_rawBits / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const
{
	return _rawBits / (1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

bool	Fixed::operator<(const Fixed& fixed) const
{
	return this->_rawBits < fixed._rawBits;
}

bool	Fixed::operator>(const Fixed& fixed) const
{
	return this->_rawBits > fixed._rawBits;
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return this->_rawBits == fixed._rawBits;
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return this->_rawBits <= fixed._rawBits;
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return this->_rawBits >= fixed._rawBits;
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return this->_rawBits != fixed._rawBits;
}
Fixed	Fixed::operator+(const Fixed& fixed) const
{
	Fixed result;

	result.setRawBits(this->_rawBits + fixed._rawBits);
	return result;
}

Fixed Fixed::operator-(const Fixed& fixed) const
{
	Fixed result;
	
	result.setRawBits(this->_rawBits - fixed._rawBits);
	return result;
}

Fixed Fixed::operator*(const Fixed& fixed) const
{
	Fixed result;
	
	result.setRawBits((this->_rawBits * fixed._rawBits)
	/ (1 << _fractionalBits));
	return result;
}

Fixed Fixed::operator/(const Fixed& fixed) const
{
	Fixed result;
	
	result.setRawBits((this->_rawBits * (1 << _fractionalBits))
	/ fixed._rawBits);
	return result;
}

// Pre-incremento
Fixed&	Fixed::operator++()
{
	_rawBits++;
	return *this;
}

// Post-incremento
Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	_rawBits++;
	return temp;
}
// Pre-decremento
Fixed&	Fixed::operator--()
{
	_rawBits--;
	return *this;
}
// Post-decremento
Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	_rawBits--;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if(a < b)
		return a;
	return b;	
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if(a > b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if(a < b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if(a > b)
		return a;
	return b;
}
