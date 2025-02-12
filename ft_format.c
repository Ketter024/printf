/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:21:51 by keetter           #+#    #+#             */
/*   Updated: 2024/12/06 12:19:24 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char format, va_list args)
{
	int	length;

	length = 0;
	if (format == 'd' || format == 'i')
		length += ft_printnb(va_arg(args, int));
	if (format == 's')
		length += ft_printstr(va_arg(args, char *));
	if (format == 'c')
		length += ft_printchar((char)va_arg(args, int));
	if (format == 'p')
		length += ft_printptr(va_arg(args, void *));
	if (format == 'u')
		length += ft_printunsigned(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		length += ft_printhex(va_arg(args, unsigned int), format == 'X');
	if (format == '%')
		length += ft_printchar('%');
	return (length);
}
