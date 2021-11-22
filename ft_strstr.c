/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:31:24 by kfum              #+#    #+#             */
/*   Updated: 2021/11/19 11:11:05 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2);

char	*ft_strstr(const char *src, const char *word)
{
	char	*p;

	p = (char *) src;
	while (*p != '\0')
	{
		if ((*p == *word) && ft_strcmp(src, word))
		{
			return (p);
		}
		p++;
	}
	return (0);
}
