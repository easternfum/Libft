/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:58:28 by kfum              #+#    #+#             */
/*   Updated: 2021/11/26 13:39:19 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
		{
			str++;
		}
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
			{
				str++;
			}
		}
	}
	return (count);
}

static char	*save_part(char const *str, char c)
{
	char	*result;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
	{
		return (0);
	}
	i = 0;
	while (str[i] && str[i] != c)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**result;
	int		i;

	if (!str)
		return (0);
	i = 0;
	result = (char **)malloc(sizeof(char *) * \
	(count_words((char *)str, c) + 1));
	if (!result)
		return (0);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			result[i] = save_part(str, c);
			i++;
			while (*str && *str != c)
				str++;
		}
	}
	result[i] = NULL;
	return (result);
}
