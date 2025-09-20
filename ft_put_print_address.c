/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_print_address.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdemir <sevdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:43:25 by sevdemir          #+#    #+#             */
/*   Updated: 2025/09/17 17:28:57 by sevdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_address(size_t number, int *len)
{
	if (number >= 16)
	{
		ft_put_address(number / 16, len);
		ft_put_address(number % 16, len);
	}
	else
	{
		ft_putchar("0123456789abcdef"[number % 16], len);
	}
}

void	ft_put_print_address(void *ptr, int *len)
{
	size_t	address;

	address = (size_t)ptr;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		*len += 5;
		return ;
	}
	write(1, "0x", 2);
	*len += 2;
	ft_put_address(address, len);
}
