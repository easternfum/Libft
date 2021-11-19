/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:20:30 by kfum              #+#    #+#             */
/*   Updated: 2021/11/10 13:12:42 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strncmp(const char *str1, const char *str2, size_t len);

char	*ft_strnstr(const char *src, const char *word, size_t len)
{
	size_t i;
	char *p;

	i = 0;
	p = (char*) src;
	while (i < len)
	{
		if ((p[i] == *word) && (ft_strncmp(src, word, len)))
		{

			return (&p[i]);
		}
		i++;
	}
	return (0);
}
