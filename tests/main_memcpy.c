#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *p1;
	unsigned char *p2;
	unsigned int i;

	i = 0;
	p1 = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	while (i < len)
	{
		p1[i] = p2[i];
		i++;
	}
	//p1[i] = '\0';
	return (p1);
}

int main(void)
{
	char a[22];
	char b[22];
	char c[] = "test basic du memcpy !";

	printf("memcpy: %s\n", memcpy(a, c, 6));
	printf("ft_memcpy: %s\n", ft_memcpy(b, c, 6));

	return (0);
}