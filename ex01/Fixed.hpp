/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:32:35 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/16 13:11:55 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class	Fixed
{

private:

	int					nb;
	static const int	bits = 8;

public:
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed(void);
	int	toInt(void) const;
	float toFloat(void) const;
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif
