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

int main(void)
{
	const char *str = "How long is this string?";
    printf("strlen: %zu\n", strlen(str));
    printf("ft_strlen: %zu\n", ft_strlen(str));
	
	return (0);
}
