/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:19:47 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/05 18:51:29 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

class	Point
{

private:

	const Fixed	x;
	const Fixed	y;

public:

	Point(void);
	Point(const float _x, const float _y);
	Point(const Fixed _x, const Fixed _y);
	Point(const Point& other);
	~Point(void);
	Fixed	getX(void) const;
	Fixed	getY(void) const;
	Point&	operator=(Point& other);
};

bool	bsp(Point const& a, Point const& b, Point const& c, Point const& point);
