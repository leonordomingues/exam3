#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;
		
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int	c = 5;
	int	d = 7;
	printf("c= %d	d= %d\n", c, d);
	ft_swap(&c, &d);
	printf("after:\nc= %d	 d= %d\n", c, d);
}
