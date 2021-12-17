/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:43:13 by chilee            #+#    #+#             */
/*   Updated: 2021/12/07 12:46:01 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char src[100] = "Hello World";
	char src2[100] = "Hello World";
	printf("%s\n", (char *)memmove(src + 10, (const char*)src, 5));
	printf("%s\n", (char *)ft_memmove(src2 + 10, (const char*)src2, 5));
	return (0);
}

/*int	main(void)
{
	const char	src[100] = "Hello World";
	const char 	src2[100] = "Hello Wolrd";
	char	dest[100] = "Fuck123456789";
	char	dest2[100] = "Fuck123456789";
	printf("%s\n", (char *)memmove(dest, src, 5));
	printf("%s\n", (char *)ft_memmove(dest2, src2, 5));
	return(0);

}*/
