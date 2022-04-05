/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:40:55 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/12/26 23:35:05 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	argum(char argum, va_list a, int *l)
{
	if (argum == '%')
		ft_putc('%', l);
	else if (argum == 'c')
		ft_putc(va_arg(a, int), l);
	else if (argum == 's')
		ft_puts(va_arg(a, char *), l);
	else if (argum == 'i' || argum == 'd')
		ft_putdec(va_arg(a, int), l);
	else if (argum == 'u')
		ft_putu(va_arg(a, unsigned int), l);
	else if (argum == 'x' || argum == 'X')
		ft_puthex(va_arg(a, unsigned int), argum, l);
	else if (argum == 'p')
		ft_putpointer(va_arg(a, void *), l);
}

int	ft_printf(const char *format, ...)
{
	va_list	a;
	int		l;
	int		i;

	l = 0;
	i = 0;
	va_start(a, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			argum(format[i], a, &l);
		}
		else
			ft_putc(format[i], &l);
		i++;
	}
	va_end(a);
	return (l);
}
