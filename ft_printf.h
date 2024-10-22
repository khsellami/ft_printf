/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksellami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:51:20 by ksellami          #+#    #+#             */
/*   Updated: 2023/12/23 17:53:24 by ksellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_digit_decimal(long n);
int	print_char(int c);
int	print_str(char *str);
int	print_digit_hexa(unsigned int n, char c);
int	print_ptr(unsigned long ptr);
int	print_unsigned_int(unsigned int n);
#endif
