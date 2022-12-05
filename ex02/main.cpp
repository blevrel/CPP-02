#include "Fixed.hpp"

int main(void)
{
	float	nb;
	Fixed	a(5.5f);
	Fixed	b(2);

	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
	nb = a + b;
	std::cout << "a + b = " << nb << std::endl;
	nb = a - b;
	std::cout << "a - b = " << nb << std::endl;
	nb = a * b;
	std::cout << "a * b = " << nb << std::endl;
	nb = a / b;
	std::cout << "a / b = " << nb << std::endl;
	return 0;
}
