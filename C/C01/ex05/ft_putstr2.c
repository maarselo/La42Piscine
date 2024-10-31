/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:36:57 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/31 15:27:18 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str, 11);
}
/*
int	main(void)
{
	char	*str;

	str = "Hola Mundo";
	ft_putstr(str);
	return (0);
}
*/
