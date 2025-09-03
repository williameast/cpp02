// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 14:38:18 by weast             #+#    #+#             //
//   Updated: 2025/09/03 19:16:32 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Bsp.hpp"

int main( void )
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(5), Fixed(0));
	Point c(Fixed(2.5f), Fixed(4));
	
	Bsp triangle(a, b, c);
	
	std::cout << "Triangle vertices:" << std::endl;
	std::cout << "A: (" << a.x << ", " << a.y << ")" << std::endl;
	std::cout << "B: (" << b.x << ", " << b.y << ")" << std::endl;
	std::cout << "C: (" << c.x << ", " << c.y << ")" << std::endl;
	std::cout << "Area: " << triangle.area << std::endl;
	
	return 0;
}
