/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:17:30 by chilee            #+#    #+#             */
/*   Updated: 2021/12/07 15:16:50 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	src[100] = "Hello World";
	char	dst[100] = "you";
	printf("%ld\n", strlcat(dst, src, 5));
	printf("%s\n", dst);

	const char	src2[100] = "Hello World";
	char	dst2[100] = "you";
	printf("%ld\n", ft_strlcat(dst2, src2, 5));
	printf("%s\n", dst2);	
	printf("\n");

	const char	src3[100] = "lorem ipsum dolor sit amet";
	char	dst3[100] = "rrrrrrrrrrrrrr";
	printf("%ld\n", strlcat(dst3, src3, 5));
	printf("%s\n", dst3);	
	
	const char	src4[100] = "lorem ipsum dolor sit amet";
	char	dst4[100] = "rrrrrrrrrrrrrr";
	printf("%ld\n", ft_strlcat(dst4, src4, 5));
	printf("%s\n", dst4);	
	printf("\n");

	const char	src5[100] = "lorem ipsum";
	char	dst5[100] = "\0rrrrrr0000a0000";
	printf("%ld\n", strlcat(dst5, src5, 15));
	printf("%s\n", dst5);

	const char	src6[100] = "lorem ipsum";
	char	dst6[100] = "\0rrrrrr0000a0000";
	printf("%ld\n", ft_strlcat(dst6, src6, 15));
	printf("%s\n", dst6);	
	printf("\n");

return (0);
}
