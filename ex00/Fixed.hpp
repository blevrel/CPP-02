/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:32:35 by blevrel           #+#    #+#             */
/*   Updated: 2022/12/03 16:39:33 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "iostream"
#ifndef FIXED_HPP
#define FIXED_HPP

class	Fixed
{

private:

	int					nb;
	static const int	bits = 8;

public:
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed(void);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

};

#endif
