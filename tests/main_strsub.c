#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

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

int main(void)
{
	char a[] = "A string to test it out.";
	char *b = ft_strsub(a, 0, 5);

	printf("%s\n", b);

	return (0);
}