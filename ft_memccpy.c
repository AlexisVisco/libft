/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/09 20:29:33 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:54:26 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned char		ch;
	const unsigned char	*source;

	dest = dst;
	source = src;
	ch = c;
	while (n--)
	{
		*dest = *source;
		dest++;
		if (*source == ch)
			return (dest);
		source++;
	}
	return (NULL);
}
