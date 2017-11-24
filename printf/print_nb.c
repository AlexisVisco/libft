/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_nb.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 20:16:41 by alexis       #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 21:51:45 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int print_str(char **p, va_list list)
{
	char *tmp;

	tmp = *p;
	if ((*++tmp) == 'd' || (*tmp) == 'i')
	{
		ft_putnbr(va_arg(list, int));
		return (1);
	}
	else
		--tmp;
	return (0);
}