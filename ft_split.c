/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:58:51 by chilee            #+#    #+#             */
/*   Updated: 2021/12/08 15:19:52 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	tab_nb;
	int	i;

	i = 0;
	tab_nb = 0;
	if (!s || !c)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			tab_nb++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (tab_nb);
}

static char	*ft_cpyword(char const *s, char c)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = 0;
	while (s[i] != c && s[i])
		i++;
	cpy = (char *)malloc(sizeof(char) * (i + 1));
	if (!cpy)
		return (NULL);
	while (j < i)
	{
		cpy[j] = s[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		place_tab;
	char	**tab;

	i = 0;
	place_tab = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!tab)
		return (NULL);
	while (place_tab < ft_countword(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			tab[place_tab] = ft_cpyword(s + i, c);
			place_tab++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	tab[place_tab] = '\0';
	return (tab);
}
