/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:06:46 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/25 14:10:29 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	*c;
	int		i;

	i = 25;
	c = "abcdefghijklmnopqrstuvwxyz";
	while (i >= 0 && i <= 25)
	{
		write(1, &c[i], 1);
		i--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
