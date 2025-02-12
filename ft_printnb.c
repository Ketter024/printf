/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:31:54 by keetter           #+#    #+#             */
/*   Updated: 2024/12/06 11:03:36 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnb(int number)
{
	long	num;
	int		printed_chars;

	num = number;
	printed_chars = 0;
	if (num < 0)
	{
		ft_putchar_fd('-', 1);
		num = -num;
		printed_chars++;
	}
	printed_chars += ft_printunsigned(num);
	return (printed_chars);
}

int	ft_printunsigned(unsigned long num)
{
	int	printed_chars;

	printed_chars = 0;
	if (num >= 10)
		printed_chars += ft_printunsigned(num / 10);
	ft_putchar_fd((num % 10) + '0', 1);
	return (printed_chars + 1);
}
