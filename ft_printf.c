/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavy <achavy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:06:45 by achavy            #+#    #+#             */
/*   Updated: 2018/12/05 22:29:15 by achavy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		init_p(t_printf *p, int	*size)
{
	*size = 0;
	p->flg_nbl = NULL;
	p->flg = NULL;
	p->cnv - NULL;
	p->cnv_nbl = NULL;
	if (!(p->flg_nbl = ft_strdup("#0+- ")
	|| !(p->flg = ft_strnew(127)))
		return (0);
	return (1);
}

static int		ft_convertion(char *str, t_printf *p)
{
	int	i;

	i = 0;
	while (ft_strchr(p->flg_nbl, str[i]))
	{
		p->flg[str[i]] = 1;
		i++;
	}
	if (str[i] <= '9' && str[i] >= '1')
	return (1);
}

int     		ft_printf(const char *str, ...)
{
	t_printf	p;
    va_list 	ap;
    int     	size;

	if (!(init_p(&p, &size)))
		return (-1);
    va_start(ap, str);
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            if (*str == '%')
                ft_putchar('%');
            else if (!(ft_convertion(str, &p)))
				return (0);
        }
        else
        {
            ft_putchar(*str);
            size++;
        }
        str++;
    }
    va_end(ap);
    return (size);
}

//ft_putocta(va_arg(ap, unsigned long long));
