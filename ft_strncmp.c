/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfum <kfum@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:58:08 by kfum              #+#    #+#             */
/*   Updated: 2021/11/10 13:12:01 by kfum             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while ((i < len) && (j < len))
	{
		if (str1[i] < str2[j])
		{
			return (-1);
		}
		else if (str1[i] > str2[j])
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
		j++;
	}
	return (0);
}
