/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:03:53 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/12/26 23:16:19 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, char a, int *l)
{
	long int	n;

	n = nbr;
	if (n < 0)
	{
		ft_putc('-', l);
		n *= -1;
	}
	if (n < 16)
	{
		if (n <= 9)
			ft_putc(n + 48, l);
		else if (n >= 10 && a == 'X')
			ft_putc((n % 10) + 'A', l);
		else if (n >= 10 && a == 'x')
			ft_putc((n % 10) + 'a', l);
	}
	else
	{
		ft_puthex(n / 16, a, l);
		ft_puthex(n % 16, a, l);
	}
}
