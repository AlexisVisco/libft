/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   heap_add.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/23 10:36:37 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/23 11:48:52 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	heap_add(t_heap *heap, void *content)
{
	int64_t whole;

	if (heap->last_remove != -1)
	{
		heap->list[heap->last_remove] = content;
		heap->last_remove = -1;
	}
	else if (heap->next_insert < heap->size)
	{
		heap->list[heap->next_insert] = content;
		heap->next_insert++;
	}
	else
	{
		if ((whole = heap_get_whole(heap)) != -1)
			heap->list[whole] = content;
		else
		{
			heap_growth(heap);
			heap_add(heap, content);
		}
	}
}
