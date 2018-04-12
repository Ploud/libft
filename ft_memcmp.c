/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:53:34 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/10 13:11:37 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long i;

	i = 0;
	while (i < n)
	{
		if (*((char *)s1 + i) != *((char *)s2 + i))
			return (*((char *)s1 + i) - *((char *)s2 + i));
		i++;
	}
	return (0);
}
