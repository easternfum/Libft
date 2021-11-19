#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


char	*ft_strchr(const char *str, int x)
{
	char *p;

	p = (char *)str;
	while (*p != x)
	{
		p++;
	}
	return (p);
}


int main(void)
{
	const char str[] = "This is a test string.";
	const char a = ' ';
    printf("strchr: %s\n", strchr(str, a));
	printf("ft_strchr: %s\n", ft_strchr(str, a));
	
	return (0);
}

