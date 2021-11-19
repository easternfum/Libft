/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:57:34 by kfum              #+#    #+#             */
/*   Updated: 2021/11/11 16:52:14 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int size;
	int i;
	int j;
	char *p;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	p =  (char *)malloc(sizeof(p) * size + 1);
	if (p ==  NULL)
	{
		return (0);
	}
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] !=  '0')
	{
		p[i + j] =  s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
