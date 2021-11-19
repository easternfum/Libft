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


char	*ft_strstr(const char *src, const char *word)
{
	char *p;

	p = (char*) src;
	while (*p != '\0')
	{
		if ((*p == *word) && ft_strcmp(src, word))
		{
			return (p);
		}
		p++;
	}
	return (0);
}

int main(void)
{
	const char str[] = "This is a test string.";
	const char a[] = "is";
    printf("strstr: %s\n", strstr(str, a));
	printf("ft_strstr: %s\n", ft_strstr(str, a));
	
	return (0);
}
