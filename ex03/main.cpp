/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:29:34 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/05 20:03:13 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

int	main(void)
{
	bool	inTriangle;

	Point	a(-1, 5);
	Point	b(2, 4);
	Point	c(-2, 0);
	Point	point(0, 2.1);
	inTriangle = bsp(a, b, c, point);
	if (inTriangle == true)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	return (0);
}
