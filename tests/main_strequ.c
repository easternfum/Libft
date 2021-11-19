#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strequ(char const *s1, char const *s2)
{
	if (!*s1 || !*s2)
	{
		return (0);
	}
	while ((*s1 || *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
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
	char *b = "How to compare.";

	printf("%d\n", ft_strequ(a, b));

	return (0);
}