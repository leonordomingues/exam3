#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	if (argc > 1)
	{
		a = argc - 1;
		while (argv[a][i] != '\0')
		{
			write(1, &argv[a][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
