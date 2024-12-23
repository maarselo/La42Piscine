/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:09:30 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/03 21:09:55 by fbanzo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_strlen(char *str);

int		ft_isdigit(char c);

int		ft_atoi(char *str);

char	*ft_strstr(char *str, char *to_find);

char	*ft_strcu(char *str, char to_find);

void	ft_putstr(char *str);

void	ft_putchar(char c);

char	*ft_strc(char *str, char to_find);

char	*ft_skipchar(char *str, char c);

void	readfile(char *num, int numlen);

void	readfiledec(char *num, int numlen);

void	readfilec(char numc, int numlen);

void	rmvfirstn(char *num, char *tmp, int j)
{
	int		i;

	i = 0;
	while (num[i + j] != '\0')
	{
		tmp[i] = num[i + j];
		i++;
	}
	tmp[i] = '\0';
}

void	checkdec(char *num)
{
	int		i;
	char	tmp[40];

	if (num[0] == '0')
	{
		i = 0;
		rmvfirstn(num, tmp, 1);
		if (ft_atoi(tmp) <= 20 && ft_atoi(tmp) >= 0)
			readfile(tmp, 2);
		else
			readfiledec(tmp, 2);
	}
	else
	{
		if (ft_atoi(num) <= 20 && ft_atoi(num) >= 0)
			readfile(num, 2);
		else
			readfiledec(num, 2);
	}
}

void	checkcent(char *numstr)
{
	int		i;
	char	tmp[40];

	i = 0;
	if (numstr[0] != '0')
	{
		readfilec(numstr[0], 1);
		ft_putchar(' ');
		readfile("100", 3);
		if (numstr[1] == '0' && numstr[2] != '0')
		{
			ft_putchar(' ');
			readfilec(numstr[2], 1);
		}
		else if (numstr[1] != '0')
		{
			ft_putchar(' ');
			rmvfirstn(numstr, tmp, 1);
			checkdec(tmp);
		}
	}
	else
		ft_putstr("Dict Error\n");
}

void	checkthousand(char *numstr, char *tmp)
{
	int	i;

	if (numstr[0] != '0')
	{
		i = 0;
		readfilec(numstr[0], 1);
		ft_putchar(' ');
		readfile("1000", 4);
		if (numstr[1] != '0' || numstr[2] != '0' || numstr[3] != '0')
		{
			ft_putchar(' ');
			if (numstr[1] == '0')
			{
				rmvfirstn(numstr, tmp, 2);
				checkdec(tmp);
			}
			else
			{
				rmvfirstn(numstr, tmp, 1);
				checkcent(tmp);
			}
		}
	}
	else
		ft_putstr("Dict Error\n");
}
