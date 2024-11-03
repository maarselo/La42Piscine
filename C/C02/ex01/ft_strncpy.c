/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:56:59 by mvillavi          #+#    #+#             */
/*   Updated: 2024/11/01 11:43:42 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	strncpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	x[20] = "Adios Alex";
	char	y[20];
	unsigned int	n = 8;

	printf("Resultado : %s\n", ft_strncpy(y, x, n));
	return (0);
}
*/
