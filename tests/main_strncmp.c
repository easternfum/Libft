#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while ((i < len) && (j < len))
	{
		if (str1[i] < str2[j])
		{
			return (-1);
		}
		else if (str1[i] > str2[j])
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
		j++;
	}
	return (0);
}

int main(void)
{
	const char str1[] = "abcdef";
	const char str2[] = "AbcdEF";
    printf("strcmp: %d\n", strncmp(str1, str2, 3));
	printf("ft_strcmp: %d\n", ft_strncmp(str1, str2, 3));
	
	return (0);
}

