/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:13:53 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/03 20:37:28 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

int		ft_strlen(char *str);

int		ft_isdigit(char c);

int		ft_atoi(char *str);

char	*ft_strstr(char *str, char *to_find);

char	*ft_strcu(char *str, char to_find);

void	ft_putstr(char *str);

void	ft_putchar(char c);

char	*ft_strc(char *str, char to_find);

char	*ft_skipchar(char *str, char c);

void	checkdec(char *num);

void	checkcent(char *numstr);

char	*getdesc(char *match, int numlen);

void	checkmatch(char *match, int numlen)
{
	char	*desc;

	if (match != NULL)
	{
		desc = getdesc(match, numlen);
		ft_putstr(desc);
	}
}

void	readfile(char *num, int numlen)
{
	int		fd;
	ssize_t	bytesread;
	char	*buffer;
	char	*match;

	fd = open("numbers.dict", O_RDONLY);
	buffer = (char *)malloc(BUFFER_SIZE);
	bytesread = read(fd, buffer, BUFFER_SIZE - 1);
	while (bytesread > 0)
	{
		buffer[bytesread] = '\0';
		match = ft_strstr(buffer, num);
		checkmatch(match, numlen);
		bytesread = read(fd, buffer, BUFFER_SIZE - 1);
	}
	free(buffer);
	close(fd);
}

void	readfiledec(char *num, int numlen)
{
	int		fd;
	ssize_t	bytesread;
	char	*buffer;
	char	*match;

	fd = open("numbers.dict", O_RDONLY);
	buffer = (char *)malloc(BUFFER_SIZE);
	bytesread = read(fd, buffer, BUFFER_SIZE - 1);
	while (bytesread > 0)
	{
		buffer[bytesread] = '\0';
		match = ft_strc(buffer, num[0]);
		checkmatch(match, numlen);
		if (num[1] != '0')
		{
			match = ft_strcu(buffer, num[1]);
			ft_putchar(' ');
			checkmatch(match, numlen);
		}
		bytesread = read(fd, buffer, BUFFER_SIZE - 1);
	}
	free(buffer);
	close(fd);
}

void	readfilec(char numc, int numlen)
{
	int		fd;
	ssize_t	bytesread;
	char	*buffer;
	char	*match;

	fd = open("numbers.dict", O_RDONLY);
	buffer = (char *)malloc(BUFFER_SIZE);
	bytesread = read(fd, buffer, BUFFER_SIZE - 1);
	while (bytesread > 0)
	{
		buffer[bytesread] = '\0';
		match = ft_strcu(buffer, numc);
		checkmatch(match, numlen);
		bytesread = read(fd, buffer, BUFFER_SIZE - 1);
	}
	free(buffer);
	close(fd);
}
