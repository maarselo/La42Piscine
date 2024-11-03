/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:40:25 by mvillavi          #+#    #+#             */
/*   Updated: 2024/11/01 11:43:54 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[10] = "Hola";
	char	y[10];

	printf("El valor de copia es de: %s\n", ft_strcpy(y, x));
	return (0);
}
*/
