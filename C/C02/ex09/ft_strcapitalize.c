/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:45:36 by mvillavi          #+#    #+#             */
/*   Updated: 2024/11/06 19:51:22 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	
	ft_strlowcase(str);
	i = 1;
	if (97 <= str[0] && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			if ((65 <= str[i - 1] && str[i - 1] <= 90) || \
			(48 <= str[i - 1] && str[i - 1] <= 57) || \
			(97 <= str[i - 1] && str[i - 1] <= 122))
				str[i] = str[i];
			else
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/
