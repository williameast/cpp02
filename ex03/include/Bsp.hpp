// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   bsp.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 18:56:36 by weast             #+#    #+#             //
//   Updated: 2025/09/05 15:40:18 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BSP_H
#define BSP_H

#include "Point.hpp"

class Triangle
{

	public:
		Point a;
		Point b;
		Point c;
		Fixed area;

	Triangle();
	Triangle(Point a, Point b, Point c);
	~Triangle();
	Triangle(Point &copy);
	Triangle &operator=(const Triangle &assignor);

	bool encapsulates(Point &p, bool includeEdges = false);

};

#endif // BSP_H
