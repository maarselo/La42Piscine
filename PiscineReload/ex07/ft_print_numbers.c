/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:54:41 by mvillavi          #+#    #+#             */
/*   Updated: 2024/12/23 17:36:57 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	*c;
	int		i;

	c = "0123456789";
	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}
