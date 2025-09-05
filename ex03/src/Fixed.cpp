// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:43:34 by weast             #+#    #+#             //
//   Updated: 2025/09/05 15:31:06 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <ostream>
#include <cmath>


// CONSTRUCTORS
// ************************************************************************** //
// set default value to 0 on construction.
Fixed::Fixed() : _literal_int(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

// set default value to 0 on construction.
Fixed::Fixed(const int value)
{
	_literal_int = value << this->_fractionalBits;
	// std::cout << "int constructor called" << std::endl;
}

// set default value to 0 on construction.
Fixed::Fixed(const float value)
{
	_literal_int = roundf(value * (1 << this->_fractionalBits));
	// std::cout << "float constructor called" << std::endl;
}

// copy constructor.
Fixed::Fixed(const Fixed &original)
{
	// std::cout << "copy assignment operator called" << std::endl;
	*this = original;
}

// DESTRUCTOR
// ************************************************************************** //

Fixed::~Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
}

// OVERLOADED OPERATORS
// ************************************************************************** //
Fixed &Fixed::operator=(const Fixed &original)
{

	// std::cout << "assignment operator called" << std::endl;
	if (this != &original)
		this->_literal_int = original.getRawBits();

	return *this;
}

bool Fixed::operator>(const Fixed &other) const
{
	return this->_literal_int > other._literal_int;
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->_literal_int < other._literal_int;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->_literal_int >= other._literal_int;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->_literal_int <= other._literal_int;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->_literal_int == other._literal_int;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->_literal_int != other._literal_int;
}

// UNARY OPERATORS;
// ************************************************************************** //

// ++fixed
Fixed& Fixed::operator++()
{
	_literal_int += 1;
	return (*this);
}

// ++fixed
Fixed& Fixed::operator--()
{
	_literal_int -= 1;
	return (*this);
}

// postfix
// fixed++
Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return old;

}

// postfix
// fixed--
Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return old;
}


// CONVERSION
// ************************************************************************** //
float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_literal_int) / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_literal_int >> this->_fractionalBits);
}


// HELPERS
// ************************************************************************** //
int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_literal_int);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_literal_int = raw;
}

// STATIC HELPERS
const Fixed& Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs < rhs) ? lhs : rhs;
}

const Fixed& Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs > rhs) ? lhs : rhs;
}

Fixed& Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return (lhs < rhs) ? lhs : rhs;
}

Fixed& Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return (lhs > rhs) ? lhs : rhs;
}
// Non members.

// ARITHMETICS
// ************************************************************************** //

Fixed operator+(const Fixed &lhs, const Fixed &rhs)
{
	Fixed result;

	result.setRawBits(lhs.getRawBits() + rhs.getRawBits());
	return (result);
}
Fixed operator-(const Fixed &lhs, const Fixed &rhs)
{
	Fixed result;

	result.setRawBits(lhs.getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed operator*(const Fixed &lhs, const Fixed &rhs)
{
	Fixed result;

	result.setRawBits((lhs.getRawBits() * rhs.getRawBits()) >> 8);
	return (result);
}

Fixed operator/(const Fixed &lhs, const Fixed &rhs)
{
	Fixed result;

	result.setRawBits((lhs.getRawBits() << 8) / rhs.getRawBits());
	return (result);
}




// STREAM MGMT
// ************************************************************************** //

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}
