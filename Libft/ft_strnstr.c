/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:16:21 by chilee            #+#    #+#             */
/*   Updated: 2021/11/30 19:24:13 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);	
	if (i < len)
	{

		while (big[i] !='\0' && big[i] != little[j])
		{
			while (big[i + j] == little[j] && little[j] != '\0'
					&& (i + j) < len)
			{
				j++;
				if (little[j] == '\0')
					return ((char *)big + i);
				j= 0;
			}
			i++;
		}
	}
	return (0);
}
