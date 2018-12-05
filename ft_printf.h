/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavy <achavy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 22:06:45 by achavy            #+#    #+#             */
/*   Updated: 2018/12/05 22:29:17 by achavy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef struct		s_printf
{
	char			*flg_nbl;
	char			*flg;
	char			*cnv_nbl;
	char			*cnv;
	int				width;
}					t_printf;

void	ft_putocta(long long n);
void    ft_puthexa(unsigned long long nb, char b);
int     ft_printf(const char *str, ...);

# endif
