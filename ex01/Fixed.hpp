// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:38:26 by weast             #+#    #+#             //
//   Updated: 2025/09/03 14:38:26 by weast            ###   ########.fr       //
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
        // operator overload
		Fixed &operator=(const Fixed &original);


    // getters
    int getRawBits(void) const;
    void setRawBits(int const raw);
    
    // conversion functions
    float toFloat(void) const;
    int toInt(void) const;

   
};

// overloading the stream operator.
std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif // FIXED_H
