/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_print_address.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdemir <sevdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:43:25 by sevdemir          #+#    #+#             */
/*   Updated: 2025/07/11 15:53:18 by sevdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "printf.h"

static void ft_put_address(size_t number)
{
	if (number >= 16)
	{
		ft_put_address(number / 16);
		ft_put_address(number % 16);
	}
	else
	{
		ft_putchar("0123456789abcdef"[number % 16]);
	}
}

static void ft_put_print_address(void *ptr)
{
	size_t	address;

	address = (size_t)ptr;
	write(1, "0x", 2);
	ft_put_address(address);
}