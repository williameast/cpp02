// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Point.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 18:22:19 by weast             #+#    #+#             //
//   Updated: 2025/09/05 15:20:34 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <ostream>

class Point
{
	public:
		Fixed x;
		Fixed y;

	// construction
// ************************************************************************** //
	Point();
	Point(Fixed x, Fixed y);
	~Point();
	Point(Point &copy);
	Point &operator=(const Point &assignor);
};

std::ostream& operator<<(std::ostream& stream, const Point &point);
