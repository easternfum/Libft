#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	unsigned int i;
	unsigned char *p1;
	unsigned char *p2;

	i = 0;
	p1 = (unsigned char*) str1;
	p2 = (unsigned char*) str2;
	while (i < len)
	{
		p1[i] = p2[i];
		i++;
	}
	return (p1);
}

int main(void)
{
	char a[] = "First string to test.";
	char b[] = "Second string to replace.";

	printf("memmove: %s\n", memmove(a, b, 14));
	printf("ft_memmove: %s\n", ft_memmove(a, b, 14));

	return (0);
}