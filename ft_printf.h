/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:42:09 by yait-ouc          #+#    #+#             */
/*   Updated: 2021/12/26 23:34:35 by yait-ouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*libs*/
# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

/*functions*/

int		ft_printf(const char *format, ...);
void	ft_putc(char a, int *l);
void	ft_puts(char *s, int *l);
void	ft_putdec(int nbr, int *l);
void	ft_puthex(unsigned int nbr, char a, int *l);
void	ft_putu(unsigned int n, int *l);
void	ft_putp(unsigned long n, int *l);
void	ft_putpointer(void *ptr, int *l);
/* added */
void	argum(char arg, va_list a, int *l);

#endif
