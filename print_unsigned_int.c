/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:34:37 by ksellami          #+#    #+#             */
/*   Updated: 2023/12/23 17:48:48 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_int(unsigned int n)
{
	int		count;
	char	*symbols;

	symbols = "0123456789";
	if (n < 10)
	{
		return (print_char(symbols[n]));
	}
	else
	{
		count = print_digit_decimal(n / 10);
		return (count + print_digit_decimal(n % 10));
	}
}
