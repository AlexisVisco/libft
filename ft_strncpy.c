/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.le101.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:41:22 by aviscogl          #+#    #+#             */
/*   Updated: 2017/11/09 09:54:53 by aviscogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char *s;

	s = s1;
	while (n > 0 && *s2 != '\0')
	{
		*s++ = *s2++;
		--n;
	}
	while (n > 0)
	{
		*s++ = '\0';
		--n;
	}
	return (s1);
}
