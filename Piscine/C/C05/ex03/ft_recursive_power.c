/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:03:20 by mvillavi          #+#    #+#             */
/*   Updated: 2024/12/23 23:03:21 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb *(ft_recursive_power(nb, power - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb, power;
	scanf("%d%d", &nb, &power);
	printf("%d", ft_recursive_power(nb, power));
	return 0;
}*/
