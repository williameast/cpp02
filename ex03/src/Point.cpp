// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Point.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 18:29:12 by weast             #+#    #+#             //
//   Updated: 2025/09/03 18:43:35 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"


// constructor
Point::Point() : x(0), y(0) {}

// paramed
Point::Point(Fixed x, Fixed y) : x(x), y(y) {}

// copy
Point::Point(Point &copy) : x(copy.x), y(copy.y) {}

// assign
Point &Point::operator=(const Point &assignor) {
	if (this != &assignor)
	{
		this->x = assignor.x;
		this->y = assignor.y;
	}
	return *this;
}

// destructor;
Point::~Point() {}

