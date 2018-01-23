/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ht_free.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/23 15:09:30 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/23 15:17:37 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ht_default_free(void *a)
{
	t_node *n;

	n = (t_node *)n;
	free(n->key);
	if (n->value)
		free(n->value);
}

void	ht_free(t_hashtable *t, void (*del)(void *))
{
	size_t i;
	t_heap *h;

	i = 0;
	while (i < t->size)
	{
		ft_printf("%i:\n", i);
		h = t->heaps[i];
		heap_free(h, del);
		i++;
	}
	free(t->heaps);
	free(t);
}
