/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 18:00:52 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/09 18:13:03 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*temp;
	unsigned long	i;

	i = 0;
	if (!(temp = malloc(n + 1)))
		return (0);
	while (i < n)
	{
		temp[i] = *((char *)src + i);
		i++;
	}
	temp[i] = 0;
	i = 0;
	while (temp[i])
	{
		*((char *)dest + i) = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
