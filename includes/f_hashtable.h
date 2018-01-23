/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   f_hashtable.h                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 14:15:22 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/23 15:16:34 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _F_HASHTABLE_H
# define _F_HASHTABLE_H
# include <string.h>
# include <stdlib.h>

typedef struct		s_hashtable
{
	void			**heaps;
	size_t			size;
}					t_hashtable;

typedef struct		s_node
{
	char			*key;
	void			*value;
}					t_node;

t_node				*ht_has(t_hashtable *t, const char *key);
t_node				*ht_has_or_create(t_hashtable *t, const char *key);
t_hashtable			*ht_new(size_t size);
void				ht_set(t_hashtable *h, const char *key, void *val);
t_node				*ht_remove(t_hashtable *t, const char *key);
size_t				ht_hash(const char *str);
void				*ht_get(t_hashtable *ht, const char *key);
void				ht_free(t_hashtable *t, void (*del)(void *));
void				ht_default_free(void *a);

#endif
