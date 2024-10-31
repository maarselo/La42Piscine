/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:33:30 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/31 15:11:21 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 40;
	printf("%d %d\n", x, y);
	ft_swap(&x, &y);
	printf("%d %d\n", x, y);
	return (0);
}
*/
