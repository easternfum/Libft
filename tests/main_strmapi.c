#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	ft_return(unsigned int x, char c)
{
	return (c + x);
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}


char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *result;

	i = 0;
	result = (char *)malloc(sizeof(ft_strlen((char *)s) + 1));
	if (!*s || !result)
	{
		return (0);
	}
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

int main(void)
{
	char a[] = "12345";
	char *b = ft_strmapi(a, &ft_return);
	printf("%s\n", b);
	printf("%lu\n", ft_strlen(a));

	return (0);
}
