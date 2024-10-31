/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:18:45 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/31 15:18:32 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(char *str)
{
	int	longitud;

	longitud = strlen(str);
	return (longitud);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hola Mundo!";
	printf("La cantidad de caracteres es de: %d\n", ft_strlen(str));
	return (0);
}
*/
