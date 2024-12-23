#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i])
		{
			write(1, &argv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
/*Es el valor de un caracter,necesita obtener a direccio
de memoria de ese caractrt para que write lo pueda manejar
la diferencia que este lo mueve con un indice*/
