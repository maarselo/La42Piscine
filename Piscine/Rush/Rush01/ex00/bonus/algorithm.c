/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:36:57 by agulanus          #+#    #+#             */
/*   Updated: 2024/10/27 02:24:35 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	check_column_visibility(int **grid, int col, int col_up, int col_down);
bool	check_row_visibility(int **grid, int row, int row_left, int row_right);

bool	number_is_not_repetead(int **grid, int row, int column, int num)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (grid[row][i] == num || grid[i][column] == num)
			return (false);
		i++;
	}
	return (true);
}

bool	check_visibility(int **grid, int **views, int row, int col)
{
	if (col == 4
		&& !check_row_visibility(grid, row, views[2][row], views[3][row]))
		return (false);
	if (row == 4
		&& !check_column_visibility(grid, col, views[0][col], views[1][col]))
		return (false);
	return (true);
}

bool	solve(int **grid, int **views, int row, int column)
{
	int	num;

	if (row == 5)
		return (true);
	if (column == 5)
		return (solve(grid, views, row + 1, 0));
	num = 1;
	while (num <= 5)
	{
		if (number_is_not_repetead(grid, row, column, num))
		{
			grid[row][column] = num;
			if (!check_visibility(grid, views, row, column))
			{
				grid[row][column] = 0;
				return (false);
			}
			if (solve(grid, views, row, column + 1))
				return (true);
			grid[row][column] = 0;
		}
		num++;
	}
	return (false);
}
