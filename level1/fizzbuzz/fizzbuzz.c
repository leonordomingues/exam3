#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main()
{
	int	num;

	num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (num % 3 == 0)
			write (1, "fizz", 4);
		else if (num % 5 == 0)
			write (1, "buzz", 4);
		else
		{
			if (num > 10)
				ft_putchar (num / 10 + '0');
			ft_putchar (num % 10 + '0');
		}
		write (1, "\n", 1);
		num++;
	}
}
