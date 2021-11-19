#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!*s1 || !*s2)
	{
		return (0);
	}
	while (i < n)
	{
		while ((*s1 || *s2) && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		i++;		
	}
	
	if (*s1 == *s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


int main(void)
{
	char *a = "How to compare.";
	char *b = "How 1o compare.";

	printf("%d\n", ft_strnequ(a, b, 5));

	return (0);
}