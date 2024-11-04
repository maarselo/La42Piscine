/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:22:13 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/03 22:57:06 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*ft_strcu(char *str, char to_find)
{
	char	*linestart;
	int		i;

	linestart = str;
	while (*linestart)
	{
		i = 0;
		while (linestart[i] == to_find)
		{
			i++;
		}
		if (i > 0)
			return (linestart);
		linestart++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*temps;

	i = 0;
	if (*to_find == '\0')
		return (str);
	temps = str;
	while (*temps)
	{
		i = 0;
		while (to_find[i] != '\0' && temps[i] == to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (temps);
		temps++;
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}
