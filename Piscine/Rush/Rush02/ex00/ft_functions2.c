/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:53:38 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/03 20:05:46 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_strlen(char *str);

int		ft_isdigit(char c);

void	ft_putstr(char *str)
{
	if (str != NULL)
		write(1, str, ft_strlen(str));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strc(char *str, char to_find)
{
	char	*linestart;
	int		i;

	linestart = str;
	while (*linestart)
	{
		if (ft_isdigit(*linestart) && ft_isdigit(*(linestart + 1)))
		{
			i = 0;
			while (linestart[i] == to_find)
			{
				i++;
			}
			if (i > 0)
				return (linestart);
		}
		linestart++;
	}
	return (NULL);
}

char	*ft_skipchar(char *str, char c)
{
	while (*str && *str == c)
	{
		str++;
	}
	return (str);
}
