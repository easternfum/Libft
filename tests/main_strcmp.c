#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_strcmp(const char *str1, const char *str2)
{
	int i;
	int j;
	int result;

	i = 0;
	j = 0;
	if ((str1[i] != '\0') && (str2[j] != '\0') && (str1[i] == str2[j]))
	{
		i++;
		j++;
	}
	result = str1[i] - str2[j];
	if (result > 0)
	{
		return (1);
	}
	else if (result < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	const char str1[] = "abcdef";
	const char str2[] = "Abcdef";
    printf("strcmp: %d\n", strcmp(str1, str2));
	printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
	
	return (0);
}
