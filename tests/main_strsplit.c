#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


int	count_char(const char *str, int c)
{
	int	count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != '\0' && str[i + 1] != c) || (str[i + 1] != '\0'))
		{
			count++;
		}
		i++;
	}
	//printf("%d\n", count);
	return (count);
}

int count_c(const char *s, char c)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
			{
				j++;
				i++;
			}
			
		}
		i++;
	}
	printf("C: %d\n", count);
	return (count);
}

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *result;
	size_t i;
	size_t x;

	x = len - start;
	result = (char *)malloc(sizeof(char) * (x + 1));
	if (!result)
	{
		return (0);
	}
	i = start;
	while (i < len && (*(s + i) != '\0'))
	{
		*result = *(s + i);
		result++;
		i++;
	}
	*result = '\0';
	return (result - x);
}

char 	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int k;
	char **result;

	i = 0;
	k = 0;
	result = (char**)malloc(sizeof(char*) * (count_c(s, c)));
	if (!result)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		j = 0;
		if ((s[i] != '\0' && s[i + 1] != c) || (i == 0 && s[i] != c))
		{
			while (s[i + j] != c && s[i + j] != '\0')
			{
				j++;
			}
			result[k] = ft_strsub(s, i, j);
			printf("Result: %s\n", result[k]);
			k++;
			i = i + j;
			
		}
		i++;
	}
	result[k] = NULL;
	printf("K: %d\n", k);
	return (result);
}


int main(void)
{
	char a[] = "A string*tosplit*.";
	//char b[] = "Test string.";
	//char c[] = "How about now?";
	char **d = ft_strsplit(a, '*');
	char *b = strtok(a, "*");
	int i = 0;
	
	//int i = 0;

	while (b != NULL)
	{
		printf("Original: %s\n", b);
		b = strtok(NULL, "*");
	}

	//printf("Strsub: %s\n", ft_strsub(a, 3, 10));
	while (d[i] != '\0')
	{
		printf("Strsplit: %s\n", d[0]);
		printf("Strsplit: %s\n", d[1]);
		printf("Strsplit: %s\n", d[2]);
		i++;
	}
		
	/*
	printf("A count: %d\n", count_char(a, '*'));
	printf("A_S count: %lu\n", strlen(a));
	printf("B count: %d\n", count_char(b, 'g'));
	printf("B_S count: %lu\n", strlen(b));
	printf("C count: %d\n", count_char(c, 'w'));
	printf("C_S count: %lu\n", strlen(c));
	*/
	//printf("Lenght: %lu\n", strlen(a));

	return (0);
}
