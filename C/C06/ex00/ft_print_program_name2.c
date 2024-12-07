#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (*argv[0])
		{
			write(1, argv[0], 1);
			argv[0]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
/*Es un puntero a la primera cadena, luego al sumarlo 
pasa al segundo caracter y se olvida del primero, por 
eso no hace falta, la direccion de memoria es el 
primero y ya lo apunta, al ser q caracter. Y este lo
que hace es modificar el puntero.*/
