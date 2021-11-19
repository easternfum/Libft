#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char			*str;
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = (char *) malloc (sizeof(*str) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


int main(void)
{
	char str[] = "How does this work?";
    printf("strdup: %s\n", strdup(str));
    printf("ft_strdup: %s\n", ft_strdup(str));
	
	return (0);
}

