#include <iostream>
#include <cmath>

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


};


std::ostream& operator<<(std::ostream & os, const Fixed& other);
