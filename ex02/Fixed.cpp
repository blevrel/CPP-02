#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->nb = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(value << this->bits);
}


Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(value * (1 << this->bits)));
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

float Fixed::toFloat(void) const
{
	float	nbr;

	nbr = (float)this->getRawBits() / (1 << this->bits);
	return (nbr);
}

//pas sur pour toInt; verifier ce que j'avais fait a l'ecole
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
	std::cout << "Copy assignment operator called" << std::endl;
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

std::ostream& operator<<(std::ostream & os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}
