/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavy <achavy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:06:45 by achavy            #+#    #+#             */
/*   Updated: 2018/11/30 22:09:41 by achavy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char *str, ...)
{
    va_list ap;
    int     size;

    va_start(ap, str);
    size = 0;
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            if (*str == '%')
                ft_putchar('%');
            else if (*str == 'd' || *str == 'i')
                ft_putnbr(va_arg(ap, int));
            else if (*str == 'c' || *str == 'C')
                ft_putchar(va_arg(ap, int));
            else if (*str == 's' || *str == 'S')
                ft_putstr(va_arg(ap, char *));
            else if (*str == 'x')
                ft_puthexa(va_arg(ap, unsigned long long), 0);
            else if (*str == 'X')
                ft_puthexa(va_arg(ap, unsigned long long), 1);
            else if (*str == 'p')
            {
                write(1, "0x", 2);
                ft_puthexa(va_arg(ap, unsigned long long), 0);
            }
            else if (*str == 'o')
                ft_putocta(va_arg(ap, unsigned long long));
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
