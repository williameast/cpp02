// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:38:18 by weast             #+#    #+#             //
//   Updated: 2025/12/09 11:48:04 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Fixed.hpp"

int main( void )
{

// create A
Fixed a;

// create b, as a copy of A
Fixed b(a);

// init c
Fixed c;

// then assign b to c
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;

return 0;
}
