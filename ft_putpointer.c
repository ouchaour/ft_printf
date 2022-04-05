/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:11:35 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/12/26 23:22:46 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putp(unsigned long nb, int *l)
{
	if (nb < 0)
	{
		ft_putc('-', l);
		nb *= -1;
	}
	if (nb < 16)
	{
		if (nb <= 9)
			ft_putc(nb + 48, l);
		else if (nb >= 10)
			ft_putc((nb % 10) + 'a', l);
	}
	else
	{
		ft_putp(nb / 16, l);
		ft_putp(nb % 16, l);
	}
}

void	ft_putpointer(void *ptr, int *l)
{
	unsigned long	a;

	a = (unsigned long)ptr;
	ft_puts("0x", l);
	ft_putp(a, l);
}
