/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdemir <sevdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:43:31 by sevdemir          #+#    #+#             */
/*   Updated: 2025/09/12 16:04:49 by sevdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

static void find_format(const char *format, va_list args, int i, int *len)
{
    char flag;

    flag = format[i + 1];
    if(flag == 'd' || flag == 'i')
        ft_putnbr(va_arg(args, int), len);
    else if(flag == 'u')
        ft_putnbr_unsigned(va_arg(args, unsigned int), len);
    else if(flag == 'c')
        ft_putchar(va_arg(args, int), len);
    else if(flag == 's')
        ft_putstr(va_arg(args, char *), len);
    else if(flag == 'p')
        ft_put_print_address(va_arg(args, void *), len);
    else if(flag == 'x' || flag == 'X')
        ft_puthex(va_arg(args, unsigned int), flag, len);
    else if(flag == '%')
        ft_putchar('%', len);
    else
        ft_putchar(flag, len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[i + 1])
			{
				va_end(args);
				return (-1);
			}
			find_format(format, args, i, &len);
			i += 2;
			continue ;
		}
		ft_putchar(format[i++], &len);
	}
	va_end(args);
	return (len);
}
