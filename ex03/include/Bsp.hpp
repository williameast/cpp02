// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   bsp.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: weast <weast@student.42berlin.de>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/09/03 18:56:36 by weast             #+#    #+#             //
//   Updated: 2025/09/03 19:09:37 by weast            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BSP_H
#define BSP_H

#include "Point.hpp"

class Bsp
{

	public:
		Point a;
		Point b;
		Point c;
		Fixed area;

	Bsp();
	Bsp(Point a, Point b, Point c);
	~Bsp();
	Bsp(Point &copy);
	Bsp &operator=(const Bsp &assignor);
};




#endif // BSP_H
