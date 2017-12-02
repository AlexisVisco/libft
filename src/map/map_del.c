/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map_del.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 13:53:36 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:07:16 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		del(void *c, size_t s)
{
	t_entry	*tmp;
	
	tmp = (t_entry *)c;
	free(tmp->key);
	free(tmp->value);
	free(tmp);
	if (s)
		;
}

void			map_del(t_map* map)
{
	t_list	*lst;
	
    lst = map->lst;
	lst_delete(&lst, del);
	map->lst = NULL;
}
