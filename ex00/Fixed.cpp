// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:43:34 by weast             #+#    #+#             //
//   Updated: 2025/09/03 14:43:34 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"


// set default value to 0 on construction.
Fixed::Fixed() : _literal_int(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// set default value to 0 on construction.
Fixed::Fixed(int value)
{
	_literal_int = value;
	std::cout << "param constructor called" << std::endl;
}

// destructor
Fixed::~Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

// copy constructor.
Fixed::Fixed(Fixed& original)
{
	std::cout << "copy assignment operator called" << std::endl;
	_literal_int = original._literal_int;
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
