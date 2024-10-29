/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:58:37 by mvillavi          #+#    #+#             */
/*   Updated: 2024/10/24 16:45:15 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	uni;
	int	dec;
	int	cen;

	cen = '0';
	while (cen <= '7')
	{
		dec = cen + 1;
		while (dec <= '8')
		{
			uni = dec + 1;
			while (uni <= '9')
			{
				write(1, &cen, 1);
				write(1, &dec, 1);
				write(1, &uni, 1);
				if (cen != '7' || dec != '8' || uni != '9')
					write(1, ", ", 2);
				uni++;
			}
			dec++;
		}
		cen++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
