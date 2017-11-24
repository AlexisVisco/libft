/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_str.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 19:21:53 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 21:51:18 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		print_str(char **p, va_list list)
{
	char *tmp;
	
	tmp = *p;
	if ((*++tmp) == 's')
	{
		ft_putstr(va_arg(list, char *));
		return (1);
	}
	else 
		--tmp;
	return (0);
}