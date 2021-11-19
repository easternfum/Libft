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

char	*ft_strcat(char *dest, const char *src)
{
	char *result;

	result = dest + ft_strlen(dest);
	while (*src != '\0')
	{
		*result++ = *src++;
	}
	*result = '\0';
	return (dest);
}

int main(void)
{
	char str[50], str2[50];
    strcpy(str,  "How about now? ");
    strcpy(str2, "Does this work?");
    printf("strcat: %s\n", strcat(str,str2));
    strcpy(str,  "How about now? ");
    strcpy(str2, "Does this work?");
    printf("ft_strcat: %s\n", ft_strcat(str,str2));
	
	return (0);
}

