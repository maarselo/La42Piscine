int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb *(ft_recursive_power(nb, power - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb, power;
	scanf("%d%d", &nb, &power);
	printf("%d", ft_recursive_power(nb, power));
	return 0;
}*/
