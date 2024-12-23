/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:05:05 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/31 15:12:21 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 30;
	y = 4;
	ft_ultimate_div_mod(&x, &y);
	printf("El resultado de la división es de %d y el resto es de %d\n", x, y);
	return (0);
}
*/
