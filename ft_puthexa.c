/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavy <achavy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:06:45 by achavy            #+#    #+#             */
/*   Updated: 2018/11/30 22:09:41 by achavy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_puthexa(unsigned int nb, char b)
{
    if (nb > 15)
    {
        ft_puthexa(nb / 16, b);
        ft_puthexa(nb % 16, b);
    }
    else if (nb < 10)
        ft_putchar(nb + 48);
    else if (b == 0)
        ft_putchar(nb + 87);
    else
        ft_putchar(nb + 55);
}
