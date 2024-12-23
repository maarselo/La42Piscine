/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:44:07 by mvillavi          #+#    #+#             */
/*   Updated: 2024/11/04 20:54:40 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	int	i;
	int	suma;

	i = 0;
	suma = 0;
	while (src[i] != '\0')
	{
		suma += 1;
		i++;
	}
	return (suma);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	char	*src = "Hola";
	char	dest[3];

	printf("Longitud de src: %d\n", ft_strlcpy(dest, src, 3));
	printf("Dest: %s\n", dest);
	return (0);
}
*/
