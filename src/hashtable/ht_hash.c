/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ht_hash.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/23 14:47:15 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/23 18:08:41 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ht_hash(const char *str)
{
	const size_t	len = ft_strlen(str);
	uint32_t		hash;
	uint32_t		i;

	i = 0;
	hash = 0;
	while(i < len) {
		hash = hash << 8;
		hash += str[i];
		i++;
	}
	return (hash);
}
