#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_space(char a)
{
	return (a == ' ' || a == '\t' || a == '\n');
}

size_t	ft_strlen(const char *str)
{
	size_t count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int first_start(const char *str)
{
	int i;

	i = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	return (i);
}

int last_end(const char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (is_space(str[i]))
	{
		i--;
	}
	return (i);
}

int	last_first(const char *str)
{
	return (last_end(str) - first_start(str));
}

char	*ft_strtrim(char const *s)
{
	char *result;
	int i;
	int x;
	int y;

	result = NULL;
	if (*s != '\0')
	{
		i = 0;
		y = last_first(s) + 1;
		result = (char *)malloc(sizeof(result) * y);
		x = first_start(s);
		while (i < y)
		{
			result[i] = s[x];
			i++;
			x++;
		}
		result[i] = '\0';
	}
	return (result);
}


int main(void)
{
	char *a = "			String	that	need to 		trim.\n";

	printf("%s\n", ft_strtrim(a));


	return(0);

}