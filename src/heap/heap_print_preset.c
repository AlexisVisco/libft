/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   heap_print_preset.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/23 10:55:35 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/23 11:54:56 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	heap_print_str(void *l)
{
	ft_putstr((char *)l);
}

void	heap_print_int(void *l)
{
	ft_putnum(*(int *)l, 10);
}

void	heap_print_int_bin(void *l)
{
	ft_putnum(*(int *)l, 2);
}

void	heap_print_int_hex(void *l)
{
	ft_putnum(*(int *)l, 16);
}

void	heap_print_bool(void *l)
{
	ft_putstr(*(int *)l == 0 ? "false" : "true");
}
