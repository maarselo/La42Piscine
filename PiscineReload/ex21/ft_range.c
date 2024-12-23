/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <mvillavi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:28:11 by mvillavi          #+#    #+#             */
/*   Updated: 2024/12/19 19:31:57 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
		return (NULL);
	i = 0;
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	while (min < max)
		ptr[i++] = min++;
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	max = 10, min = 3;
	int	*array = ft_range(min, max);
	int i = 0;
	while(i < (max - min))
		printf("%d, ", array[i++]);
	return 0;
}
*/
