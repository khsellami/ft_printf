/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:23:53 by ksellami          #+#    #+#             */
/*   Updated: 2023/12/23 17:28:07 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex(unsigned long n)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	count = 0;
	if (n < 16)
	{
		count += print_char(symbols[n]);
	}
	else
	{
		count += hex(n / 16);
		count += hex(n % 16);
	}
	return (count);
}

int	print_ptr(unsigned long ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += hex(ptr);
	return (count);
}
