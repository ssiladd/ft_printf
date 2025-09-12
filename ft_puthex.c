/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdemir <sevdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:43:39 by sevdemir          #+#    #+#             */
/*   Updated: 2025/07/11 16:44:09 by sevdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void ft_puthex(unsigned int n, char flag, int len)
{
	if(n >= 16)
	{
		ft_puthex(n/16, flag, len);
		ft_puthex(n%16, flag, len);
	}
	else
	{
		if(flag == 'x')
			ft_putchar("0123456789abcdef"[n%16]);
		if(flag == 'X')
			ft_putchar("0123456789ABCDEF"[n%16]);
	}
}