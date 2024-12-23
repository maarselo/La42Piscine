/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:03:12 by mvillavi          #+#    #+#             */
/*   Updated: 2024/12/23 23:03:13 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;

	total = 1;
	if (power < 0)
		return (0);
	else if (power == 1)
		return (1);
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}
/*
#include <stdio.h>
int	 main(void)
{
	int	nb, power;
	scanf("%d%d", &nb, &power);
	printf("%d", ft_iterative_power(nb, power));
	return 0;
}*/
