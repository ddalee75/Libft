/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:16:21 by chilee            #+#    #+#             */
/*   Updated: 2021/11/29 19:02:13 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len == 0)
		return (0);
	if (i < len)
	{
		while (big[i] != little[j])
			i++;
		while (big[i] == little[j])
		{
			j++;
			i++;
		}
		if (little[j] == '\0' && len >= i)
			return ((char *)big + i - j);
		return (0);
	}
	return (0);
}
