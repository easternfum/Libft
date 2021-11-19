#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *str1, const void *str2, size_t x)
{
	unsigned int i;
	unsigned int j;
	unsigned char *p1;
	unsigned char *p2;

	i = 0;
	j = 0;
	p1 = (unsigned char*) str1;
	p2 = (unsigned char*) str2;
	while ((i < x) && (j < x))
	{
		if (p1[i] != p2[j])
		{
			return (p1[i] - p2[j]);
		}
		i++;
		j++;
	}
	return (0);
}

int main(void)
{
	char str1[] = "Acsef";
	char str2[] = "AZDef";
    printf("memcmp: %d\n", memcmp(str1, str2, 3));
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 3));
	
	return (0);
}
