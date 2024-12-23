/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:22:37 by mvillavi          #+#    #+#             */
/*   Updated: 2024/12/23 13:36:21 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	contador;

	i = 0;
	contador = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			contador ++;
		i++;
	}
	return (contador);
}
