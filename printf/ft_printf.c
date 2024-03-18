/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:28:52 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/18 19:34:43 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	types(va_list p_arg, char a)
{
	int	length;

	length = 0;
	if (a == 'c')
		length += ft_putchar(va_arg(p_arg, int), 1);
	else if (a == 'p')
		length += ft_printstr(va_arg(p_arg, char *));
	else if (a == 'p')
		length += ft_print_adress(va_arg(p_arg, void *));
	else if (a == 'd')
		length += ft_isdigit(va_arg(p_arg, int));
	else if (a == 'i')
		length += ft_print_digit(va_arg(p_arg, int));
	else if (a == 'u')
		length += ft_decimal(va_arg(p_arg, unsigned int));
	else if (a == 'x')
		length += ft_hexadecimal(va_arg(p_arg, unsigned long), 'x');
	else if (a == 'X')
		length += ft_hexadeciaml_u(va_arg(p_arg, unsigned long), 'X');
	else if (a == '%')
		length += ft_putchar('%', 1);
	return (length);
}

int	ft_printf(const char *input, ...)
{
	va_list	p_arg;
	int		i;
	int		res;

	res = 0;
	if (input == NULL)
		return (res);
	i = 0;
	va_start(p_arg, input);
	while (input[i] != '\0')
	{
		if (input[i] != '%')
		{
			write(1, &input[i], 1);
			res++;
		}
		else
		{
			res += types(p_arg, input[i + 1]);
			i++;
		}
		i++;
	}
	va_end(p_arg);
	return (res);
}
