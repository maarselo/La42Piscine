/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:56:00 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/31 15:16:16 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	suma_total;
	int	i;

	suma_total = 0;
	i = 0;
	while (str[i] != '\0')
	{
		suma_total += 1;
		i++;
	}
	return (suma_total);
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
