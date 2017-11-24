/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/09 16:23:33 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:54:38 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cs;
	char	*cd;
	size_t	i;

	cs = (char *)src;
	cd = (char *)dst;
	i = -1;
	while (++i < n)
		cd[i] = cs[i];
	return (dst);
}
