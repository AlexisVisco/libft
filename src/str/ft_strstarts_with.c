/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstarts_with.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/10 17:55:55 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/10 17:56:47 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstarts_with(const char *s, char c)
{
	return (s[0] == c);
}