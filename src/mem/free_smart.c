/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   free_smart.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/26 15:40:19 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/26 16:10:31 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	free_smart(void *ptr)
{
	void **real_ptr = (void **)ptr;
	free(*real_ptr);
	*real_ptr = NULL;
}