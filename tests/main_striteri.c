#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void print(unsigned int i, char *s)  
{
   *s += i;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (s != '\0' || *s != '\0' || f != '\0')
	{
		return ;
	}
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

int main(void)  
{
	char *a = "string";
	ft_striteri(a, &print);
    return (0);
}

