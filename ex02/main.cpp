// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:38:18 by weast             #+#    #+#             //
//   Updated: 2025/12/09 12:07:32 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed(5.05f) * Fixed(2) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max(a, b) << std::endl;
return 0;
}
