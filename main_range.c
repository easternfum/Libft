#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
	{
		return (0);
	}
	range = (int *) malloc (sizeof(*range) * (max - min) + 1);
	if (range == '\0')
	{
		return (0);
	}
	i = 0;
	while (min <= max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int main(void)
{
    int a = 2;
    int b = 10;
	int i = 0;
	int k = b - a;
	int *final = ft_range(a, b);

	while (i <= k)
	{
		printf("Range = %d\n", final[i]);
		i++;
	}

	//free(final);
	return (0);
}
