/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 19:15:58 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 22:00:48 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"
#define NB_FUNCS 3

static void		fill_functions(int (**functions)(char **, va_list))
{
	functions[0] = print_char;
	functions[1] = print_nb;
	functions[2] = print_str;
}

void			ft_printf(char *fmt, ...)
{
	va_list		argp;
	int			(*functions[NB_FUNCS])(char **, va_list);	
	int 		i;
	int			custom_format;

	fill_functions(functions);
	va_start(argp, fmt);
	while(*fmt)
	{
		i = -1;
		custom_format = 0;
		while (*fmt == '%' && ++i < NB_FUNCS)
		{
			if (functions[i](&fmt, argp))
			{
				custom_format = 1;
				break ;
			}
		}
		if (!custom_format)
			ft_putchar(*fmt);
		fmt++;
	}			
	va_end(argp);
}