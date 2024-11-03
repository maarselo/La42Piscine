/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:44:07 by mvillavi          #+#    #+#             */
/*   Updated: 2024/11/02 15:52:27 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	
	i = 0;	
	while(i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
		dest[i] = '\0';
	return (strlen(src));
}

int	main(void)
{
	char *src = "Hola Mundo";
	char dest[10];

	printf("De origen: %d y era %s y destino es %s",ft_strlcpy(dest, src, 10), src, dest);
	return(0);
}
