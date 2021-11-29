/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:58:28 by kfum              #+#    #+#             */
/*   Updated: 2021/11/29 12:05:12 by kfum             ###   ########.fr       */
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
	result = (char *)ft_memalloc(sizeof(char) * (i + 1));
	if (!result)
	{
		return (NULL);
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

static char	*check_buffer(char **buffer, int i, char const *str, char c)
{
	while (*str)
	{
		while (*str && *str == c)
		{
			str++;
		}			
		if (*str && *str != c)
		{
			buffer[i] = save_part(str, c);
			if (!buffer[i])
			{
				free (buffer);
				return (NULL);
			}
			else
			{
				i++;
				while (*str && *str != c)
					str++;
			}
		}
	}
	buffer[i] = NULL;
	return (*buffer);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**result;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	result = (char **)ft_memalloc(sizeof(char *) * \
	(count_words((char *)str, c) + 1));
	if (!result)
	{
		return (NULL);
	}		
	check_buffer(result, i, str, c);
	return (result);
}
