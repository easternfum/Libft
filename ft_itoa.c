/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:58:48 by kfum              #+#    #+#             */
/*   Updated: 2021/11/26 12:30:45 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}

static int	get_size(int x)
{
	int	count;

	count = 0;
	if (x <= 0)
	{
		count = 1;
	}
	while (x != 0)
	{
		count++;
		x /= 10;
	}
	return (count);
}

static void	ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(str);
	while (i < j / 2)
	{
		temp = str[i];
		str[i] = str[j - i - 1];
		str[j - i - 1] = temp;
		i++;
	}
}

char	*ft_itoa(int x)
{
	char	*result;
	int		i;
	int		neg;

	neg = (x < 0);
	result = (char *)ft_memalloc(sizeof(char) * (get_size(x) + 1));
	if (!result)
	{
		return (0);
	}
	if (x == 0)
		result[0] = '0';
	i = 0;
	while (x != 0)
	{
		result[i] = '0' + ft_abs(x % 10);
		x /= 10;
		i++;
	}
	if (neg)
	{
		result[i] = '-';
	}
	ft_strrev(result);
	return (result);
}
