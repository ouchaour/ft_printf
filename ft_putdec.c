/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 23:08:26 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/12/26 23:10:49 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdec(int nbr, int *l)
{
	long	rem;

	rem = nbr;
	if (rem < 0)
	{
		ft_putc('-', l);
		rem *= -1;
	}
	if (rem < 10)
		ft_putc(rem + 48, l);
	if (rem > 9)
	{	
		ft_putdec(rem / 10, l);
		ft_putdec(rem % 10, l);
	}
}
