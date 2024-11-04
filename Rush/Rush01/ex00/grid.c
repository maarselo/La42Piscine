/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:53:50 by agulanus          #+#    #+#             */
/*   Updated: 2024/10/27 01:55:26 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

int	**create_grid(void)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(sizeof(int *) * 4);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		j = 0;
		grid[i] = (int *)malloc(sizeof(int) * 4);
		if (!grid[i])
		{
			free_grid(grid);
			return (NULL);
		}
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	print_grid(int **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar('0' + grid[i][j]);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
