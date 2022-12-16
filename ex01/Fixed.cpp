/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:04:50 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/16 13:12:14 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->nb = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(value << this->bits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(value * (1 << this->bits)));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	int	value;

	value = this->getRawBits() / (1 << this->bits);
	return (value);
}

float Fixed::toFloat(void) const
{
	float	value;

	value = (float)this->getRawBits() / (1 << this->bits);
	return (value);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

int	Fixed::getRawBits(void) const
{
	return (this->nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->nb = raw;
}
