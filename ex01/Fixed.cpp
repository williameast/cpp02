// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:43:34 by weast             #+#    #+#             //
//   Updated: 2025/09/03 16:35:27 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <ostream>
#include <cmath>


// set default value to 0 on construction.
Fixed::Fixed() : _literal_int(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// set default value to 0 on construction.
Fixed::Fixed(const int value)
{
	_literal_int = value << this->_fractionalBits;
	std::cout << "int constructor called" << std::endl;
}

// set default value to 0 on construction.
Fixed::Fixed(const float value)
{
	_literal_int = roundf(value * (1 << this->_fractionalBits));
	std::cout << "float constructor called" << std::endl;
}

// destructor
Fixed::~Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

// copy constructor.
Fixed::Fixed(const Fixed &original)
{
	std::cout << "copy assignment operator called" << std::endl;
	*this = original;
}

// Overloaded Operators
// == just compares the raw bits?
Fixed &Fixed::operator=(const Fixed &original)
{

	std::cout << "assignment operator called" << std::endl;
	if (this != &original)
		this->_literal_int = original.getRawBits();

	return *this;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_literal_int) / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_literal_int >> this->_fractionalBits);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_literal_int);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_literal_int = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}
