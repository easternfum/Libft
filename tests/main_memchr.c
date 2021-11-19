#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	*ft_memchr(const void *str, int x, size_t len)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char*)str;
	p2 = NULL;
	while ((str != NULL) && (len--))
	{
		if (*p1 != x)
		{
			p1++;
		}
		else
		{
			p2 = p1;
		}
	}
	return (p2);
}

int main(void)
{
	const char a[] = "This is a string to test it out.";
	const char c = 'I';

	printf("memchr: %s\n", memchr(a, c, strlen(a)));
	printf("ft_memchr: %s\n", ft_memchr(a, c, ft_strlen(a)));

}
