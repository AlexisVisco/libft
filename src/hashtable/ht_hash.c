/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ht_hash.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/23 14:47:15 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/23 15:18:17 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ht_hash(const char *str)
{
	size_t len;

	len = 0;
	while (*str)
	{
		len += (size_t)(*str);
		len++;
		str++;
	}
	return (len);
}
