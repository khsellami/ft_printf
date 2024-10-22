/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit_decimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:03:24 by ksellami          #+#    #+#             */
/*   Updated: 2023/12/23 15:14:25 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_digit_decimal(long n)
{
	int		count;
	char	*symbols;

	symbols = "0123456789";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit_decimal(-n) + 1);
	}
	else if (n < 10)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		count = print_digit_decimal(n / 10);
		return (count + print_digit_decimal(n % 10));
	}
}
