#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t i;
	size_t j;
	size_t len_dest;
	size_t len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	j =  len_dest;
	if (len_dest < len - 1 && len > 0)
	{
		while (src[i] && len_dest + i < len - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	if (len_dest > len)
	{
		len_dest = len;
	}
	return (len_dest + len_src);
}

int main(void)
{
	char *str1 = "How about now";
	char *str2 = "many this can copy?";
	int size = 8;
	char buffer[size];
	size_t x;
	strcpy(buffer, str1);
	x = strlcat(buffer, str2, size);
    printf("strlcat: %zu\n", x);
	printf("1st version: %s\n", buffer);
	strcpy(buffer, str1);
	x = ft_strlcat(buffer, str2, size);
	printf("ft_strlcat: %zu\n", x);
	printf("2nd version: %s\n", buffer);
	printf("strlen: %lu  strlen: %lu\n", strlen(str1), strlen(str2));
	
	return (0);
}
