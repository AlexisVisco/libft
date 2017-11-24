/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/09 09:48:21 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:56:37 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	char	c;
	char	sc;
	size_t	len;

	if ((c = *find++) != '\0')
	{
		len = ft_strlen(find);
		while (1)
		{
			while (1)
			{
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
				if (sc == c)
					break ;
			}
			if (len > slen)
				return (NULL);
			if (ft_strncmp(s, find, len) == 0)
				break ;
		}
		s--;
	}
	return ((char *)s);
}
