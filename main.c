/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmand <achavy@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 22:06:45 by carmand           #+#    #+#             */
/*   Updated: 2016/11/30 22:09:41 by carmand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int main(int c, char **v)
{
	if (c == 2)
	{
		printf("%X\n", atoi(v[1]));
		ft_printf("%X\n", atoi(v[1]));
		printf("%x\n", atoi(v[1]));
		ft_printf("%x\n", atoi(v[1]));

	}
	return (0);
}
