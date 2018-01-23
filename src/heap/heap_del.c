/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   heap_del.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/23 11:27:30 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/23 11:47:26 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*heap_del(t_heap *heap, size_t n)
{
	void *tmp;

	if (n < heap->size)
	{
		tmp = heap->list[n];
		heap->list[n] = NULL;
		heap->last_remove = n;
		return (tmp);
	}
	return NULL;
}
