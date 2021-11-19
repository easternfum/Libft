#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *str, int x, size_t len)
{
	unsigned int i;
	unsigned char *p;

	i = 0;
	p = (unsigned char*) str;
	while (i < len)
	{
		p[i] = x;
		i++;
	}
	return (str);
}

int main(void)
{
	char a[] = "This is a string to test it out.";
	char b = '0';

	printf("memset: %s\n", memset(a, b, 9));
	printf("ft_memset: %s\n", ft_memset(a, b, 9));

	return (0);
}