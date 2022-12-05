/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:30:42 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/05 19:54:48 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Fixed	side_of_line(Point const& a, Point const& b, Point const& point)
{
	return ((b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX()));
}

//https://blackpawn.com/texts/pointinpoly/
bool bsp(Point const& a, Point const& b, Point const& c, Point const& point)
{
	Fixed	pointAB;
	Fixed	pointBC;
	Fixed	pointAC;
	
	pointAB = side_of_line(a, b, point);
	pointBC = side_of_line(b, c, point);
	pointAC = side_of_line(a, c, point);
	if (pointAB < 0 && pointBC < 0 && pointAC > 0)
		return (true);
	return (false);
}
