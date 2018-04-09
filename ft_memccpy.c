/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 17:50:25 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/09 17:58:36 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned long i;

	i = 0;
	while (*((char *)s2 + i) != c && i < n)
	{
		*((char *)s1 + i) = *((char *)s2 + i);
		i++;
	}
	return (s1);
}
