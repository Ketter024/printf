/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:37:26 by keetter           #+#    #+#             */
/*   Updated: 2024/12/06 11:40:42 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int number, int uppercase)
{
	int		printed_chars;
	char	*hex_base;

	if (uppercase)
		hex_base = "0123456789ABCDEF";
	else
		hex_base = "0123456789abcdef";
	printed_chars = 0;
	if (number >= 16)
		printed_chars += ft_printhex(number / 16, uppercase);
	ft_putchar_fd(hex_base[number % 16], 1);
	return (printed_chars + 1);
}
