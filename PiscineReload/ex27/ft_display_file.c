/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 20:48:49 by mvillavi          #+#    #+#             */
/*   Updated: 2024/12/23 20:49:12 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
}

int	ft_comp_ac(int ac)
{
	if (ac < 2)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	if (ac > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	return (0);
}

void	ft_display_file(const char *filename)
{
	int		fd;
	char	buff[4096];
	ssize_t	bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(2, "Cannot read file.\n");
		return ;
	}
	bytes_read = read(fd, buff, 4096);
	while (bytes_read > 0)
	{
		write(1, buff, bytes_read);
		bytes_read = read(fd, buff, 4096);
	}
	close(fd);
}

int	main(int ac, char **av)
{
	if (ft_comp_ac(ac))
		return (1);
	ft_display_file(av[1]);
	return (0);
}
