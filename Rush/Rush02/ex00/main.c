/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbanzo-s <fbanzo-s@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:29:46 by fbanzo-s          #+#    #+#             */
/*   Updated: 2024/11/03 23:08:16 by fbanzo-s         ###   ########.fr       */
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

void	checkdec(char *num);

void	checkcent(char *numstr);

void	readfile(char *num, int numlen);

void	readfiledec(char *num, int numlen);

void	readfilec(char numc, int numlen);

void	rmvfirstn(char *num, char *tmp, int j);

void	checkthousand(char *numstr, char *tmp);

char	*getdesc(char *match, int numlen)
{
	char	*desc;
	int		i;

	desc = match + numlen;
	desc = ft_skipchar(desc, ' ');
	desc = ft_skipchar(desc, ':');
	desc = ft_skipchar(desc, ' ');
	i = 0;
	while (desc[i] != '\n')
	{
		i++;
	}
	desc[i] = '\0';
	return (desc);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	manejarnum(char *numstr, int numlen)
{
	char	tmp[40];

	if (numlen <= 2)
	{
		checkdec(numstr);
	}
	if (numlen == 3)
	{
		checkcent(numstr);
	}
	if (numlen > 3 && numlen <= 6)
	{
		checkthousand(numstr, tmp);
	}
}

int	checkdig(char *numstr)
{
	int	i;

	i = 0;
	while (numstr[i] != '\0')
	{
		if (numstr[i] < '0' && numstr[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	char	*numstr;
	int		numlen;
	int		numint;

	numstr = av[1];
	numint = ft_atoi(numstr);
	if (checkdig(numstr) != 0)
	{
		if (ac == 2)
		{
			numlen = ft_strlen(numstr);
			manejarnum(numstr, numlen);
			return (0);
		}
		else
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
}
