int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	i = 1;
	total = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	else
	{
		while (i <= nb)
		{
			total *= i;
			i++;
		}
		return (total);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	num;
	scanf("%d", &num);
	printf("El factorial es de %d", ft_iterative_factorial(num));
	return 0;
}
*/
