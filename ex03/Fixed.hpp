/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:33:50 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/05 17:17:25 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <limits>

class Fixed
{

private:

	int 				nb;
	static const int	bits = 8;

public:

	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed & other);
	~Fixed(void);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
	Fixed & operator=(const Fixed & other);
	int		operator<(const Fixed & other);
	int		operator>(const Fixed & other);
	int		operator<=(const Fixed & other);
	int		operator>=(const Fixed & other);
	int		operator==(const Fixed & other);
	int		operator!=(const Fixed & other);
	float	operator+(const Fixed & other);
	float	operator-(const Fixed & other);
	float	operator*(const Fixed & other);
	float	operator/(const Fixed & other);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);
	static Fixed&		min(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&		max(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream & os, const Fixed& other);

#endif
