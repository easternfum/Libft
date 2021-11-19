/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:28:26 by kfum              #+#    #+#             */
/*   Updated: 2021/11/10 13:12:57 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *str, int x)
{
	int i;
	int flag;
	char *p;

	i = ft_strlen(str);
	flag = 0;
	p = (char*) str;
	while (*p)
	{
		if (p[i] == x)
		{
			flag = 1;
			if (flag == 1)
			{
				return (&p[i]);
			}
		}
		i--;
	}	
	return (0);
}
