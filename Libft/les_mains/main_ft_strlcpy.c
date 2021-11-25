/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:07:39 by chilee            #+#    #+#             */
/*   Updated: 2021/11/25 13:58:14 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const	char src[100] = "Hello World, hi";
	char	dst[100] = "You are the best";
	printf("%ld\n", strlcpy(dst, src, 15));

	const 	char src2[100] = "Hello World, hi";
	char	dst2[100] = "You are the best";
	printf("%ld\n", ft_strlcpy(dst2, src2, 15));
	return (0);	
}
