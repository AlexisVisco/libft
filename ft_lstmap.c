/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 13:22:25 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:53:59 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*tmp;
	t_list	*first;

	if (!f || !lst)
		return (NULL);
	tmp = f(lst);
	if (!(new_list = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	first = new_list;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		if (!(new_list->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		new_list = new_list->next;
		lst = lst->next;
	}
	return (first);
}
