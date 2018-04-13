/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 18:21:30 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/12 18:57:56 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str || !find)
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == find[j] && j < len)
		{
			if (find[j + 1] == '\0' || (j + 1) == len)
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
