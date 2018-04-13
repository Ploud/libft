/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 17:50:25 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/13 15:11:24 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t i;

	i = 0;
	while ( && i < n)
	{
		*((char *)s1 + i) = *((char *)s2 + i);
		if (*((char *)s2 + i) == c)
			return (s1 + i + 1);
		i++;
	}
	return (NULL);
}
