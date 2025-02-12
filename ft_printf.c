/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:15:32 by keetter           #+#    #+#             */
/*   Updated: 2024/12/06 10:59:02 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed_chars;
	int		i;

	i = 0;
	printed_chars = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed_chars += ft_format(format[++i], args);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			printed_chars++;
		}
		i++;
	}
	va_end(args);
	return (printed_chars);
}
