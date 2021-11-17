#define _OPEN_SYS_ITOA_EXT
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int check_base(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		n  = -n;
		i++;
	}
	else if (n == 0)
	{
		return (0);
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char 	*ft_itoa(int n)
{
	int i;
	int j;
	char *result;

	i = 0;
	j = 0;
	result = (char *)malloc(sizeof(char));
	if (!n || !result)
	{
		return (0);
	}
	if (n == 0)
	{
		result[i++] = 0;
		result[i] = '\0';
		return (result);
	}
	if (n < 0)
	{
		j++;
		result[i] = '-';
		i++;
		n *= -1;
	}
	result[i] = '\0';
	return (result);
}

int main(void)
{
	int a = -6;
	char *p = ft_itoa(a);
	int k = check_base(a);
	printf("%s\n", p);
	printf("%d\n", k);

	return (0);
}