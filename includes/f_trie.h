/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   f_trie.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/29 18:28:39 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/29 19:18:08 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _F_TRIE_H
# define _F_TRIE_H

# include "libft.h"

#define ALPHABET_SIZE 26
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

typedef struct			s_trie_node
{
    struct s_trie_node	*children[ALPHABET_SIZE];
    int					is_word_end;
}						t_trie_node;

t_trie_node				*trie_new(void);
void					trie_insert(t_trie_node *root, const char *key);
int						trie_search(t_trie_node *root, const char *key);
int						trie_is_last_node(t_trie_node *root);
void					trie_start_with(t_trie_node *r, char *prefix, t_heap *h);

# endif