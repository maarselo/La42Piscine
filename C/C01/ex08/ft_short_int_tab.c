/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:32:07 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/30 23:17:14 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab [i] > tab[i +1])
		{
			tmp = tab[i +1];
			tab [i + 1] = tab [i];
			tab[i] = tmp;
			i = -1;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	n[] = {10, 4, 7, 3, 11};

	ft_sort_int_tab(n, 5);
	printf("Ascendente es %d %d %d %d %d\n", n[0], n[1], n[2], n[3], n[4]);
	return (0);
}
*/
