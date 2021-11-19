#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_toupper(int x)
{
	if(x >= 97 && x <= 122)
	{
		x = x - 32;
	}
	return (x);
}

int main(void)
{
	char a = 'f';
    printf("toupper: %c\n", toupper(a));
	printf("ft_toupper: %c\n", ft_toupper(a));
	
	return (0);
}
