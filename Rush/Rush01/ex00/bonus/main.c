/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agulanus <agulanus@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:01:26 by agulanus          #+#    #+#             */
/*   Updated: 2024/10/26 18:03:12 by agulanus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

void	ft_print_error(void);
int		ft_strlen(char *str);
void	free_grid(int **grid);
int		**create_grid(void);
bool	solve(int **grid, int **views, int row, int column);
void	print_grid(int **grid);

int	ft_check_input(char *str)
{
	int	i;

	if (ft_strlen(str) != 39)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0 && (str[i] < '1' || str[i] > '5'))
			return (0);
		if (i % 2 != 0 && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	**create_views(char *str)
{
	int	**views;
	int	i;
	int	j;

	views = create_grid();
	if (!views)
		return (NULL);
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			views[i][j] = *str - '0';
			str += 2;
			j++;
		}
		i++;
	}
	return (views);
}

int	main(int argc, char **argv)
{
	int	**views;
	int	**grid;

	if (argc != 2 || !ft_check_input(argv[1]))
	{
		ft_print_error();
		return (0);
	}
	views = create_views(argv[1]);
	if (!views)
		return (0);
	grid = create_grid();
	if (!grid)
	{
		free(views);
		return (0);
	}
	if (solve(grid, views, 0, 0))
		print_grid(grid);
	else
		ft_print_error();
	free_grid(grid);
	free_grid(views);
	return (0);
}
