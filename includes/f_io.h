/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   f_io.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/25 14:27:35 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/25 14:31:20 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _F_IO_H
# define _F_IO_H

void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putnbrbase(int nbr, char *base);
void	ft_putstr_classic(char *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(const char *str);

#endif
