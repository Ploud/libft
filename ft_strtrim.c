/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 15:56:03 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/12 16:12:48 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	size;
	size_t	j;
	char	*tab;

	i = 0;
	size = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i + size])
		size++;
	while (s[i + size] == ' ' || s[i + size] == '\n' || s[i + size] == '\t')
		size--;
	if (!(tab = malloc(size + 1)))
		return (NULL);
	while (j < size)
		tab[j] = s[i + j];
	return (tab);
}
