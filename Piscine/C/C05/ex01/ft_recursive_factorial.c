/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 23:03:04 by mvillavi          #+#    #+#             */
/*   Updated: 2024/12/23 23:03:06 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	else
		return (nb * ft_iterative_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	num;
	scanf("%d", &num);
	printf("El factorial es de %d", ft_iterative_factorial(num));
	return 0;
}
*/
