/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   lst_remove_one.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/12 17:50:09 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 14:25:15 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	lst_remove_one(t_list **list, void (*del)(void*, size_t))
{
	if (*list)
		(*del)((*list)->content, (*list)->content_size);
	ft_memdel((void **)list);
}
