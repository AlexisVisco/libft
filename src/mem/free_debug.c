/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   free_debug.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 21:41:11 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/26 16:11:51 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "f_printf.h"
#include <stdlib.h>

void	free_debug(void *ptr)
{
	ft_printf("Pointer is now free.");
	void **real_ptr = (void **)ptr;
	free(*real_ptr);
	*real_ptr = NULL;
}