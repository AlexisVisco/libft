/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 13:54:46 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 17:13:51 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static void		aux(int n, int b, char *ans, int *p, const char *base)
{
	if (n <= -b || b <= n)
		aux(n / b, b, ans, p, "0123456789ABCDEF");
	ans[(*p)++] = base[math_abs(n % b)];
}

char			*ft_itoa_base(int value, int base)
{
	char	*ans;
	int		p;

	if (base < 2 || 16 < base
		|| !(ans = (char *)malloc(sizeof(char) * math_intlen(value, base) + 2)))
		return (NULL);
	p = 0;
	if (base == 10 && value < 0)
		ans[p++] = '-';
	aux(value, base, ans, &p, "0123456789ABCDEF");
	ans[p] = '\0';
	return (ans);
}
