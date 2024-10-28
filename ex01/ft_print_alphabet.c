/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:00:31 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/24 15:15:39 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*c;
	int		i;

	i = 0;
	c = "abcdefghijklmnopqrstuvwxyz";
	while (i >= 0 && i <= 25)
	{
		write(1, &c[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
