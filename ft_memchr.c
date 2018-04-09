/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 18:13:34 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/09 18:23:43 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	void			*p;

	i = 0;
	p = NULL;
	while (i < n)
	{
		if (*((int *)s + i) == c)
			*((int *)p) = *((int *)s + i);
		i++;
	}
	return (p);
}
