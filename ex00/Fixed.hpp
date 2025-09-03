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
        Fixed(int value);
        // destructor
        ~Fixed();
        // copy constructor;
        Fixed(Fixed& original);
        // operator overload
		Fixed &operator=(const Fixed &original);


    // getters
    int getRawBits(void) const;
    void setRawBits(int const raw);

   
};

#endif // FIXED_H
