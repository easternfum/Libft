#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	unsigned int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	unsigned int	i;
	char			*result;

	i = 0;
	result = dest + ft_strlen(dest);
	while (i < len)
	{
		*result++ = src[i];
		i++;
	}
	*result = '\0';
	return (dest);
}


int main(void)
{
	char str[50], str2[50];
    strcpy(str2,  "This is source");
    strcpy(str, "This is destination");
    printf("Test 1:\n");
    printf("strcat: %s\n", strncat(str,str2,5));
    strcpy(str2,  "This is source");
    strcpy(str, "This is destination");
    printf("ft_strcat: %s\n", ft_strncat(str,str2,5));

    printf("\nTest 2:\n");
    strcpy(str2,  "efghijkl");
    strcpy(str, "abcd");
    printf("strcat: %s\n", strncat(str,str2,5));
    strcpy(str2,  "efghijkl");
    strcpy(str, "abcd");
    printf("ft_strcat: %s\n", ft_strncat(str,str2,5));

    printf("\nTest 3:\n");
    strcpy(str2,  " world");
    strcpy(str, "Hello");
    printf("strcat: %s\n", strncat(str,str2,5));
    strcpy(str2,  " world");
    strcpy(str, "Hello");
    printf("ft_strcat: %s\n", ft_strncat(str,str2,5));
    return (0);
}