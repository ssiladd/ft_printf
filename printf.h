/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sevdemir <sevdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 15:43:49 by sevdemir          #+#    #+#             */
/*   Updated: 2025/07/11 15:43:50 by sevdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_B "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbr_unsigned(unsigned int n, int *len);
void	ft_putstr(char *s, int *len);
void	ft_print_pointer_address(void *ptr, int *len);
void	ft_puthex(unsigned int number, int *len, char *base);

#endif