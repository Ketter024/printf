/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keetter <keetter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:41:11 by keetter           #+#    #+#             */
/*   Updated: 2024/12/06 11:46:11 by keetter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// Fonctions principales
int	ft_printf(const char *format, ...);
int	ft_format(char specifier, va_list args);

// Gestion des conversions
int	ft_printnb(int number);
int	ft_printunsigned(unsigned long num);
int	ft_printstr(char *str);
int	ft_printchar(char c);
int	ft_printhex(unsigned int number, int uppercase);
int	ft_printptr(void *ptr);

// Fonctions utilitaires
int	ft_putchar_fd(char c, int fd);

#endif
