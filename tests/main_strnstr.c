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


char	*ft_strnstr(const char *src, const char *word, size_t len)
{
	unsigned int i;
	char *p;

	i = 0;
	p = (char*) src;
	while (i < len)
	{
		if ((p[i] == *word) && (ft_strncmp(src, word, len)))
		{

			return (&p[i]);
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char a[] = "This is a test string that might works?";
	char b[] = "a";

	printf("strnstr: %s\n", strnstr(a, b, 15));
	printf("ft_strnstr: %s\n", ft_strnstr(a, b, 15));
	
	return (0);
}