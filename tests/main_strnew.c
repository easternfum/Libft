#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *p;

	p = (char *)malloc(sizeof(char) * (size + 1));
	if (p == NULL)
	{
		return NULL;
	}
	p[size] = '\0';
	while (size--)
	{
		p[size] = '\0';
	}
	return (p);	
}

int main(void)
{
	char a[] = "A*string to*split*.";

	printf("Does it print: %s\n", ft_strnew(a));

	return (0);
}
