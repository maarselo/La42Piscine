/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:51:31 by mvillavi          #+#    #+#             */
/*   Updated: 2024/12/23 18:31:05 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	i;

	total = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (i <= nb)
	{
		total *= i;
		i++;
	}
	return (total);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
	return 0;
}*/
