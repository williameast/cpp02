// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:38:18 by weast             #+#    #+#             //
//   Updated: 2025/09/05 15:32:34 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Bsp.hpp"

int main( void )
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(5), Fixed(0));
	Point c(Fixed(2.5f), Fixed(4));
	
	Triangle triangle(a, b, c);
	Point test(1, 1);
	
	std::cout << "Triangle vertices:" << std::endl;
	std::cout << a << " " << " " << b << " " << c << std::endl;


	std::cout << "Is " << test << " inside triangle: ";

	if (triangle.encapsulates(test))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;








	return 0;
}
