/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:15:58 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/31 15:19:23 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab [j];
		tab[j] = tmp;
		i++;
		j --;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int n[] = {10, 4, 7, 3, 11};
	ft_rev_int_tab(n, 5);
	printf("Invertido es %d %d %d %d %d\n", n[0],n[1],n[2],n[3],n[4]);
	return (0);
}
*/
