#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void bzero(void *str, size_t x)
{
	unsigned i;
	char *newstr;

	i = 0;
	newstr = str;
	while (i < x)
	{
		newstr[i] = '\0';
		i++;
	}
}

int main(void)
{
	const char a[] = "This is a string to test it out.";
	const char c = 'I';

	printf("memchr: %s\n", memchr(a, c, strlen(a)));
	printf("ft_memchr: %s\n", ft_memchr(a, c, ft_strlen(a)));

}
