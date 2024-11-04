/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_column_visibility.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:39:55 by agulanus          #+#    #+#             */
/*   Updated: 2024/10/27 12:44:16 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	check_column_visibility_up(int **grid, int col, int col_up)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			visible_count++;
		}
		i++;
	}
	if (visible_count != col_up)
		return (false);
	return (true);
}

bool	check_column_visibility_down(int **grid, int col, int col_down)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 3;
	while (i >= 0)
	{
		if (grid[i][col] > max_height)
		{
			max_height = grid[i][col];
			visible_count++;
		}
		i--;
	}
	if (visible_count != col_down)
		return (false);
	return (true);
}

bool	check_column_visibility(int **grid, int col, int col_up, int col_down)
{
	if (check_column_visibility_up(grid, col, col_up)
		&& check_column_visibility_down(grid, col, col_down))
		return (true);
	return (false);
}
