/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   trie_insert.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/29 18:37:44 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/29 19:19:11 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# include "libft.h"

void	trie_insert(t_trie_node *root, const char *key)
{
	const size_t	length = ft_strlen(key);
    t_trie_node		*trie_node = root;
	size_t			level;
	int				index;

	level = 0;
	while (level < length)
	{
		index = CHAR_TO_INDEX(key[level]);
		if (!trie_node->children[index])
			trie_node->children[index] = trie_new();
		trie_node = trie_node->children[index];
		level++;
	}
    trie_node->is_word_end = 1;
}
