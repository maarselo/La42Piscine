/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:27:19 by mvillavi          #+#    #+#             */
/*   Updated: 2024/11/04 14:10:28 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
			i++;
		else
			return (0);
	}
	if (str[i] == '\0')
		return (1);
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "hola";

	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
*/
