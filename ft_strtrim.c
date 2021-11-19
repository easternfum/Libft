/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:58:04 by kfum              #+#    #+#             */
/*   Updated: 2021/11/11 11:18:32 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

int	is_space(char a)
{
	return (a == ' ' || a == '\t' || a == '\n');
}

int	first_start(const char *str)
{
	int	i;

	i = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	return (i);
}

int	last_end(const char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (is_space(str[i]))
	{
		i--;
	}
	return (i);
}

int	last_first(const char *str)
{
	return (last_end(str) - first_start(str));
}

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		i;
	int		x;
	int		y;

	result = NULL;
	if (*s != '\0')
	{
		i = 0;
		y = last_first(s) + 1;
		result = (char *)malloc(sizeof(result) * y);
		x = first_start(s);
		while (i < y)
		{
			result[i] = s[x];
			i++;
			x++;
		}
		result[i] = '\0';
	}
	return (result);
}
