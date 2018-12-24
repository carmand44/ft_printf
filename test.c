/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavy <achavy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:06:45 by achavy            #+#    #+#             */
/*   Updated: 2018/11/30 22:09:41 by achavy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

long ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	return (ft_power(nb, power - 1) * nb);
}

void	ft_putfloat(long double n, int y) // y nb de chiffre apres la virgule a 
{									// afficher!!comportemnt ndef if not correct
	long double nb;	

	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
	ft_putnbr((int)nb);
	ft_putchar('.');
	nb = nb - (int)nb;
	ft_putnbr(nb * ft_power(10, y));
}

int main(void)
{
	long double n;
	scanf("%Lf", &n);
	printf("test nb 1 main : %Lf\n", n);
	ft_putfloat(n, 6);
	ft_putchar('\n');
	return (0);
}
