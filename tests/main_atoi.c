#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
	int i;
	int flag;
	int result;

	i = 0;
	result = 0;
	flag = 1;
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			flag = -1;
		}
		i++;
	}	
	while(str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}	
	return (flag * result);
}

int main(void)
{
	printf("atoi: %d || ft_atoi: %d\n", atoi("999"), ft_atoi("999"));
	printf("atoi: %d || ft_atoi: %d\n", atoi(" 999"), ft_atoi(" 999"));
	printf("atoi: %d || ft_atoi: %d\n", atoi("-999"), ft_atoi("-999"));
	printf("atoi: %d || ft_atoi: %d\n", atoi("+999"), ft_atoi("+999"));
	printf("atoi: %d || ft_atoi: %d\n", atoi("a999"), ft_atoi("a999"));
	printf("atoi: %d || ft_atoi: %d\n", atoi(" +999"), ft_atoi(" +999"));
	printf("atoi: %d || ft_atoi: %d\n", atoi("	999"), ft_atoi("	999"));
	printf("atoi: %d || ft_atoi: %d\n", atoi(" z999"), ft_atoi(" z999"));
}