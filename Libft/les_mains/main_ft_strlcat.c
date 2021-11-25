/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:17:30 by chilee            #+#    #+#             */
/*   Updated: 2021/11/25 16:49:31 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	src[100] = "Hello World";
	char	dst[100] = "you";
	printf("%ld\n", strlcat(dst, src, 11));
	printf("%s\n", dst);

	const char	src2[100] = "Hello World";
	char	dst2[100] = "you";
	printf("%ld\n", ft_strlcat(dst2, src2, 11));
	printf("%s\n", dst2);	
	return (0);
}
