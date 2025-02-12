/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:44:20 by keetter           #+#    #+#             */
/*   Updated: 2024/12/06 13:56:29 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned long long num, int *count)
{
	const char	*hex_digits = "0123456789abcdef";

	if (num >= 16)
		ft_puthex(num / 16, count);
	write(1, &hex_digits[num % 16], 1);
	(*count)++;
}

int	ft_printptr(void *ptr)
{
	unsigned long long	address;
	int					printed_chars;
	int					hex_len;

	printed_chars = 0;
	address = (unsigned long long)ptr;
	printed_chars += write(1, "0x", 2);
	if (address == 0)
		printed_chars += write(1, "0", 1);
	else
	{
		hex_len = 0;
		ft_puthex(address, &hex_len);
		printed_chars += hex_len;
	}
	return (printed_chars);
}
