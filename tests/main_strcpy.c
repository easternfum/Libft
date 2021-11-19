#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
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
    printf("strcpy: %s\n", strcpy(str1, str2));
	printf("ft_strcpy: %s\n", ft_strcpy(str1, str2));
	
	return (0);
}
