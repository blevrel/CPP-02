/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:39:43 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/16 14:05:29 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
}

Point::Point(const Point& other) : x(other.getX()), y(other.getY())
{
}

Point::~Point(void)
{
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

Point& Point::operator=(Point& other)
{
	(void)other;
	std::cout << "Can't copy X and Y points because they are declared as \"const\"" << std::endl;
	return (*this);
}
