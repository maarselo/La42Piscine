/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:44:53 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/20 17:13:07 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_putchar(char c);

void	printchar(int x, int y, int i, int j)
{
	if (j == 0 || i == 0 || i == x - 1 || j == y - 1)
	{
		if (i == 0 && (j == 0 || j == y - 1))
			ft_putchar('A');
		else if (i == x - 1 && (j == y - 1 || j == 0))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
	{
		write(1, "Invalid arguments", 17);
		return ;
	}
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			printchar(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
