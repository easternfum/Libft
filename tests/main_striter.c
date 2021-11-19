#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void print(char *s)  
{
   ++(*s);
   printf("Does it works?\n");
}

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	if (*s || *f)
	{
		return ;
	}
	ptr = s;
	while (*ptr)
	{
		f(ptr++);
	}
}

int main(void)  
{
	char *a = "string";
	ft_striter(a, &print);
    return (0);
}

