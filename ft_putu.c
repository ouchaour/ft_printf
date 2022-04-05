/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:07:28 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/12/26 23:11:13 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putu(unsigned int n, int *l)
{
	unsigned long	nbr;

	nbr = n;
	if (nbr <= 9)
		ft_putc(nbr + '0', l);
	else
	{
		ft_putu(nbr / 10, l);
		ft_putu(nbr % 10, l);
	}
}
