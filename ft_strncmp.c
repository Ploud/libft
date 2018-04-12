/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 18:29:26 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/12 15:36:47 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
	{
		if (i == n - 1)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
