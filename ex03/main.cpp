/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:29:34 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/16 14:05:58 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

int	main(void)
{
	bool	inTriangle;

	Point	a(0, 4);
	Point	b(6, 0);
	Point	c(0, -1);
	Point	point(1, 2.5);
	inTriangle = bsp(a, b, c, point);
	if (inTriangle == true)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	return (0);
}
