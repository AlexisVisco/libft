/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_char.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 20:26:22 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 21:50:27 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_str(char **p, va_list list)
{
	char *tmp;
	
	tmp = *p;
	if ((*++tmp) == 'c')
	{
		ft_putchar(va_arg(list, int));
		return (1);
	}
	else 
		--tmp;
	return (0);
}