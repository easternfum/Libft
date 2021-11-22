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

char	*ft_strrchr(const char *str, int x)
{
	int i;
	int flag;
	char *p;

	i = ft_strlen(str);
	flag = 0;
	p = (char*) str;
	while (*p)
	{
		if (p[i] == x)
		{
			return (&p[i]);
		}
		i--;
	}	
	return (0);
}

int main(void)
{
	char a[] = "This is a test string that might works?";
	char b = 't';
	char *test1 = strrchr(a, b);
	char *test2 = ft_strrchr(a, b);

	printf("Original: %s\n", test1);
	printf("Own: %s\n", test2);
	
	return (0);
}