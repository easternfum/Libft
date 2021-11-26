/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:28:26 by kfum              #+#    #+#             */
/*   Updated: 2021/11/24 12:10:49 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int x)
{
	int		i;
	char	*p;

	i = ft_strlen(str);
	p = (char *) str;
	if (!p)
	{
		return (0);
	}
	while (i > 0)
	{
		if (p[i] == (char)x)
		{
			return (p + i);
		}
		i--;
	}
	if (p[i] == (char)x)
	{
		return (p + i);
	}
	return (0);
}
