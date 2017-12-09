/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   f_lib.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 14:31:50 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/09 14:12:57 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _F_LIB_H
# define _F_LIB_H
# include <string.h>
# include <stdlib.h>

uint8_t	ft_floatstr(char *dst, float n, int precision, uint8_t base);
uint8_t	ft_intstr(char *dst, int64_t n, uint8_t base);
uint8_t	ft_uintstr(char *dst, uint64_t n, uint8_t base);
char	*ft_itoa(int nbr);

#endif