/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:33:07 by keetter           #+#    #+#             */
/*   Updated: 2024/12/06 12:03:12 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = 0;
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
		len++;
	}
	return (len);
}
