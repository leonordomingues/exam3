#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main()
{
	int	i;
	char str[] = "esta string";

	i = ft_strlen(str);
	printf("%d\n", i);
}
