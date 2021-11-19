#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	ft_tolower(char x)
{
	if(x >= 65 && x <= 90)
	{
		x = x + 32;
	}
	return (x);
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


char	*ft_strmap(char const *s, char (*f)(char))
{
	char *p1;
	char *p2;
	char *result;

	result = (char *)malloc(sizeof(ft_strlen((char *)s) + 1));
	if (!*s || !result)
	{
		return (0);
	}
	p1 = (char *)s;
	p2 = result;
	while (*p1)
	{
		*(p2++) = f(*(p1++));
	}
	return (result);
}

int main(void)
{
	char a[] = "A strINg TO tEst OUT.";
	char *b = ft_strmap(a, &ft_tolower);
	printf("%s\n", b);

	return (0);
}
