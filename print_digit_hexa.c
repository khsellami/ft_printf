/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit_hexlow.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:01:03 by ksellami          #+#    #+#             */
/*   Updated: 2023/12/23 17:09:16 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_digit_hexa(unsigned int n, char c)
{
	int		count;
	char	*symbols;

	if (c == 'x')
		symbols = "0123456789abcdef";
	else if (c == 'X')
		symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit_hexa(-n, c) + 1);
	}
	else if (n < 16)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		count = print_digit_hexa(n / 16, c);
		return (count + print_digit_hexa(n % 16, c));
	}
}
