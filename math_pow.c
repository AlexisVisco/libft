/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   math_pow.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alexis <alexis@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/16 10:58:57 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 18:57:11 by alexis      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		math_pow(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * math_pow(nb, power - 1));
}
