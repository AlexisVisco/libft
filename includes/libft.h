/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aviscogl <aviscogl@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/08 12:44:50 by aviscogl     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/26 15:42:16 by aviscogl    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include "f_mem.h"
# include "f_str.h"
# include "f_io.h"
# include "f_is.h"
# include "f_lib.h"
# include "f_lst.h"
# include "f_math.h"
# include "f_printf.h"

# define smart __attribute__ ((cleanup(free_smart)))
# define smart_debug __attribute__ ((cleanup(free_debug)))

#endif
