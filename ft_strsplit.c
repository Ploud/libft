/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:14:05 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/12 16:24:52 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	compte_lettres(char const *str, char c)
{
	int i;

	i = 0;
	while (!(str[i] == c) && str[i])
	{
		i++;
	}
	return (i);
}

int static	compte_mots(char const *str, char c)
{
	int i;
	int nbr_mot;

	i = 0;
	nbr_mot = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			nbr_mot++;
		while (!(str[i] == c) && str[i])
			i++;
	}
	return (nbr_mot);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		nb;
	int		k;

	i = 0;
	j = 0;
	nb = compte_mots(str, c);
	tab = malloc(sizeof(char*) * (nb + 1));
	tab[nb] = 0;
	while (i < nb)
	{
		while (str[j] == c)
			j++;
		tab[i] = malloc(sizeof(char) * (compte_lettres(str + j, c) + 1));
		k = 0;
		while (!(str[j] == c) && str[j])
			tab[i][k++] = str[j++];
		tab[i][k] = '\0';
		i++;
	}
	return (tab);
}
