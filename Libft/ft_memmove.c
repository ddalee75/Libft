/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:27:41 by chilee            #+#    #+#             */
/*   Updated: 2021/11/24 18:16:55 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptrd;
	const char	*ptrs;
	size_t		i;

	ptrd = (char *)dest;
	ptrs = (const char *)src;
	if ((src < dest) && (dest < src + n))
	{
		while (n > 0)
		{
			ptrd[n - 1] = ptrs[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dest);
}
