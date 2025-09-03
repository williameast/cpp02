// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:38:26 by weast             #+#    #+#             //
//   Updated: 2025/09/03 17:57:53 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_H
#define FIXED_H

#include <iostream>


class Fixed
{
    private:
        int _literal_int;
        static const int _fractionalBits = 8;

    public:
    // INSTANTIATION AND DESTRUCTION
        // default constructor
            Fixed();
        // param constructor
            Fixed(const int value);
        // param constructor
            Fixed(const float value);
        // destructor
            ~Fixed();
        // copy constructor;
            Fixed(const Fixed &original);

    // OPERATOR OVERLOADING
    // ************************************************************************** //
        
        // Assignment operator
        Fixed &operator=(const Fixed &original);

        // Comparison operators
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;


        // Increment/Decrement operators (prefix and postfix)
        Fixed& operator++();    // prefix increment (++fixed)
        Fixed& operator--();    // prefix decrement (--fixed)
        Fixed operator++(int);  // postfix increment (fixed++)
        Fixed operator--(int);  // postfix decrement (fixed--)

    // ACCESSOR METHODS
    // ************************************************************************** //
        
        // Raw bits getter and setter
        int getRawBits(void) const;
        void setRawBits(int const raw);
    
    // CONVERSION METHODS
    // ************************************************************************** //
        
        // Convert to floating point
        float toFloat(void) const;
        // Convert to integer (truncates fractional part)
        int toInt(void) const;

    // STATIC HELPERS
    static const Fixed& min(const Fixed &lhs, const Fixed &rhs);
    static const Fixed& max(const Fixed &lhs, const Fixed &rhs);

    static Fixed& min(Fixed &lhs, Fixed &rhs);
    static Fixed& max(Fixed &lhs, Fixed &rhs);
   
};

// Arithmetics
Fixed operator+(const Fixed& lhs, const Fixed& rhs);
Fixed operator-(const Fixed& lhs, const Fixed& rhs);
Fixed operator*(const Fixed& lhs, const Fixed& rhs);
Fixed operator/(const Fixed& lhs, const Fixed& rhs);

// overloading the stream operator.
std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif // FIXED_H
