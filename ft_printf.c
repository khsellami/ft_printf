/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:15:52 by ksellami          #+#    #+#             */
/*   Updated: 2023/12/23 16:56:04 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit_decimal((long)va_arg(ap, int));
	else if (specifier == 'x' || specifier == 'X')
		count += print_digit_hexa((long)va_arg(ap, unsigned int), specifier);
	else if (specifier == 'p')
		count += print_ptr(va_arg(ap, unsigned long));
	else if (specifier == '%')
		count += print_char('%');
	else if (specifier == 'u')
		count += print_unsigned_int(va_arg(ap, unsigned int));
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (write (1, "", 0) == -1)
		return (-1);
	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
// #include <stdio.h>
// int main()
// {
// 	int a = printf("%");
// 	int b = 0;
// 	ft_printf("%");
// 	printf("\n ft:%i \norg: %i", b, a);
// }
