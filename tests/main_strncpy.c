#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}



int main(void)
{
	char str1[50];
	const char str2[] = "Does this even works?";
    printf("strncpy: %s\n", strncpy(str1, str2, 9));
	printf("ft_strncpy: %s\n", ft_strncpy(str1, str2, 9));
	
	return (0);
}
