#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char	*s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*argv, es un array de punteros a cadenas, esta ft
no cambia el contenido, solo la direccion de memoria,
char ** se usa porque queremos cambiar los valores 
originales de los punteros en el array argv.
Si usáramos solo char *, estaríamos trabajando con 
copias y no con los punteros originales.*/

void	ft_swap(char **s1, char **s2)
{
	char *tmp;
	
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	y;

	i = 1;
	while(i < argc - 1)
	{
		y = 1;
		while (y < argc - 1)
		{
			if (ft_strcmp(argv[y], argv[y + 1]) > 0)
			{
				ft_swap(&argv[y], &argv[y + 1]);
			}
			y++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return 0;	
}
