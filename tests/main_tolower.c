#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_tolower(int x)
{
	if(x >= 65 && x <= 90)
	{
		x = x + 32;
	}
	return (x);
}

int main(void)
{
	char a = 'D';
    printf("tolower: %c\n", tolower(a));
	printf("ft_tolower: %c\n", ft_tolower(a));
	
	return (0);
}
