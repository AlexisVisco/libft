/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   trie_start_with.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/29 18:52:07 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/29 20:23:40 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void	trie_start_with_a(t_trie_node *root, char *prefix, t_heap *heap)
{
	char	*tmp_ch;
	char	*tmp;
	char	*tmpx;
	int		i;

	tmp = ft_strdup(prefix);
    if (root->is_word_end)
        heap_add(heap, ft_strdup(prefix));
    if (trie_is_last_node(root))
        return ;
	i = 0;
	while (i < ALPHABET_SIZE)
	{
		if (root->children[i])
        {
			tmp_ch = malloc(sizeof(char) * 2);
			tmp_ch[0] = 97 + i;
			tmp_ch[1] = 0;
			tmpx = tmp;
			tmp = ft_strjoin(tmp, tmp_ch);
			free(tmp_ch);
			trie_start_with_a(root->children[i], tmp, heap);
			free(tmpx);
		}
		i++;
	}
	free(tmp);
}

void	trie_start_with(t_trie_node *root, char *prefix, t_heap *heap)
{
	t_trie_node *cr;
	size_t		level;
	size_t		length;
	int			index;

	length = ft_strlen(prefix);
	level = 0;
	cr = root;
	while (level < length)
	{
		index = CHAR_TO_INDEX(prefix[level]);
		if (!cr->children[index])
			return ;
		cr = cr->children[index];
		level++;
	}
	if (cr->is_word_end && trie_is_last_node(cr))
	{
		heap_add(heap, prefix);
		return ;
	}
	if (!trie_is_last_node(cr))
		trie_start_with_a(cr, prefix, heap);
}