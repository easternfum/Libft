/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:58:04 by kfum              #+#    #+#             */
/*   Updated: 2021/11/26 12:29:51 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char a)
{
	return (a == ' ' || a == '\t' || a == '\n');
}

static int	first_start(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_space(str[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

static int	last_end(const char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		if (!is_space(str[i]))
		{
			return (i);
		}
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		x;
	int		y;

	if (!s)
	{
		return (0);
	}
	x = first_start(s);
	y = last_end(s);
	if (x == -1 || y == -1)
	{
		return (ft_strnew(0));
	}
	result = ft_strsub(s, x, (y - x) + 1);
	return (result);
}
