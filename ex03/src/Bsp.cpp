// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bsp.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 19:01:18 by weast             #+#    #+#             //
//   Updated: 2025/09/03 19:27:51 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bsp.hpp"


Bsp::Bsp() {}

Bsp::Bsp(Point a, Point b, Point c) : a(a), b(b), c(c)
{
    this->area =
		(a.x * (b.y - c.y)
		 + b.x * (c.y - a.y)
		 + c.x * (a.y - b.y)) / 2;
}

Bsp::~Bsp() {}

Bsp::Bsp(Point &copy) { (void)copy; }

Bsp &Bsp::operator=(const Bsp &assignor)
{
	if (this != &assignor)
	{
		this->a = assignor.a;
		this->b = assignor.b;
		this->c = assignor.c;
	}

	return *this;
}
