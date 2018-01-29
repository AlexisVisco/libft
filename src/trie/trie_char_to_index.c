/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   trie_char_to_index.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/29 20:58:19 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/29 21:02:36 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		trie_char_to_index(char c)
{
	char x;

	x = ft_tolower(c);
	if (ft_isalpha(c))
		return x - 'a';
	else if (x == '-')
		return (27);
	else if (x == '.')
		return (28);
	else if (x == '_')
		return (29);
	return (0);
}