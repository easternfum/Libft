#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


void	*ft_memccpy(void *dest, const void *src, int i, size_t x)
{
	char *p1;
	char *p2;

	p1 = (char*) dest + x;
	p2 = (char*) src;
	while (*p1)
	{
		if (*p2 == i)
		{
			*p1 = *p2;
			return (p1);
		}
		p2++;
	}
	return (0);
}

int main(void)
{
	char str[] = "How to prevent string to be fully copied?";
	char buffer[80];
	memset(buffer, '\0', 80);
	memccpy(buffer, str, 't', 80);
    printf("memccpy: %s\n", buffer);
	ft_memccpy(buffer, str, 't', 80);
	printf("ft_memccpy: %s\n", buffer);
	
	return (0);
}
