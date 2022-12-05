/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:12:59 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/05 18:13:01 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->nb = 0;
}

Fixed::Fixed(const int value)
{
	setRawBits(value << this->bits);
}


Fixed::Fixed(const float value)
{
	setRawBits(roundf(value * (1 << this->bits)));
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::~Fixed(void)
{
}

float Fixed::toFloat(void) const
{
	float	nbr;

	nbr = (float)this->getRawBits() / (1 << this->bits);
	return (nbr);
}

int	Fixed::toInt(void) const
{
	int	nbr;
	
	nbr = this->getRawBits() / (1 << this->bits);
	return (nbr);
}

int	Fixed::getRawBits(void) const
{
	return (this->nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->nb = raw;
}

Fixed & Fixed::operator=(const Fixed & other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

int	Fixed::operator<(const Fixed & other)
{
	if (this->getRawBits() < other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>(const Fixed & other)
{
	if (this->getRawBits() > other.getRawBits())
		return (1);
	return (0);

}

int Fixed::operator<=(const Fixed & other)
{
	if (this->getRawBits() <= other.getRawBits())
		return (1);
	return (0);

}

int Fixed::operator>=(const Fixed & other)
{
	if (this->getRawBits() >= other.getRawBits())
		return (1);
	return (0);

}

int Fixed::operator==(const Fixed & other)
{
	if (this->getRawBits() == other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator!=(const Fixed & other)
{
	if (this->getRawBits() != other.getRawBits())
		return (1);
	return (0);
}

float	Fixed::operator+(const Fixed & other)
{
	float	nb;

	nb = this->toFloat() + other.toFloat();
	return (nb);
}

float	Fixed::operator-(const Fixed & other)
{
	float	nb;

	nb = this->toFloat() - other.toFloat();
	return (nb);
}

float	Fixed::operator*(const Fixed & other)
{
	float	nb;

	nb = this->toFloat() * other.toFloat();
	return (nb);
}

float	Fixed::operator/(const Fixed & other)
{
	float	nb;

	nb = this->toFloat() / other.toFloat();
	return (nb);
}

Fixed	Fixed::operator++()
{
	this->nb++;
	return (*this);
}


Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	nb++;
	return (temp);
}

Fixed Fixed::operator--()
{
	this->nb--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;

	nb--;
	return (temp);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() == b.getRawBits())
	{
		std::cout << "Both fixed point numbers are equal, returning a reference to the first one" << std::endl;
		return (a);
	}
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
		
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() == b.getRawBits())
	{
		std::cout << "Both fixed point numbers are equal, returning a reference to the first one" << std::endl;
		return (a);
	}
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
		
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() == b.getRawBits())
	{
		std::cout << "Both fixed point numbers are equal, returning a reference to the first one" << std::endl;
		return (a);
	}
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
		
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() == b.getRawBits())
	{
		std::cout << "Both fixed point numbers are equal, returning a reference to the first one" << std::endl;
		return (a);
	}
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
		
}
std::ostream& operator<<(std::ostream & os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}
