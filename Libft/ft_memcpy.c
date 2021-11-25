/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:51:34 by chilee            #+#    #+#             */
/*   Updated: 2021/11/24 18:34:25 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrd;
	char	*ptrs;
	size_t	i;

	ptrd = (char *)dest;
	ptrs = (char *)src;
	i = 0;
	while (ptrd[i] && ptrs[i] && i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dest);
}
