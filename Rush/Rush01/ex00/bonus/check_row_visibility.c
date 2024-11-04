/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_visibility.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:44:26 by agulanus          #+#    #+#             */
/*   Updated: 2024/10/27 12:54:52 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	check_row_visibility_left(int **grid, int row, int row_left)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 0;
	while (i < 5)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			visible_count++;
		}
		i++;
	}
	if (visible_count != row_left)
		return (false);
	return (true);
}

bool	check_row_visibility_right(int **grid, int row, int row_right)
{
	int	max_height;
	int	visible_count;
	int	i;

	max_height = 0;
	visible_count = 0;
	i = 4;
	while (i >= 0)
	{
		if (grid[row][i] > max_height)
		{
			max_height = grid[row][i];
			visible_count++;
		}
		i--;
	}
	if (visible_count != row_right)
		return (false);
	return (true);
}

bool	check_row_visibility(int **grid, int row, int row_left, int row_right)
{
	if (check_row_visibility_left(grid, row, row_left)
		&& check_row_visibility_right(grid, row, row_right))
		return (true);
	return (false);
}
