/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdelone.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/12 17:50:09 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:53:49 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **list, void (*del)(void*, size_t))
{
	if (*list)
		(*del)((*list)->content, (*list)->content_size);
	ft_memdel((void **)list);
}
