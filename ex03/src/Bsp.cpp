// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bsp.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 19:01:18 by weast             #+#    #+#             //
//   Updated: 2025/09/05 15:39:43 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bsp.hpp"


Triangle::Triangle() {}

Triangle::Triangle(Point a, Point b, Point c) : a(a), b(b), c(c)
{
    this->area =
		(a.x * (b.y - c.y)
		 + b.x * (c.y - a.y)
		 + c.x * (a.y - b.y)) / 2;

	// take absolute area
	if (this->area < 0)
		this->area = this->area * -1;
}

Triangle::~Triangle() {}

Triangle::Triangle(Point &copy) { (void)copy; }

Triangle &Triangle::operator=(const Triangle &assignor)
{
	if (this != &assignor)
	{
		this->a = assignor.a;
		this->b = assignor.b;
		this->c = assignor.c;
	}
	return *this;
}

bool Triangle::encapsulates(Point &p, bool includeEdges)
{
	if (this->area == 0)
		return false;
	
	Triangle t1(p, this->b, this->c);
	Triangle t2(this->a, p, this->c);
	Triangle t3(this->a, this->b, p);

	Fixed sum = t1.area + t2.area + t3.area;

	if (includeEdges)
		return (sum <= this->area);
	else
		return (sum == this->area);
}
