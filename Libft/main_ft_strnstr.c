/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:36:56 by chilee            #+#    #+#             */
/*   Updated: 2021/11/30 19:24:00 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	big[20] = "Foo Bar Baz";
	const char	little [20] = "Bar";
	printf("%p\n", strnstr(big, little, 10));
	printf("%p\n", ft_strnstr(big, little, 10));

	printf("%s\n", strnstr(big, little, 10));
	printf("%s\n", ft_strnstr(big, little, 10));
/*
	printf("s1 = %s s2 = %s strnstr 0 = %s   ft_strnstr 0 = %s\n", "Foo BaBar Baz", "Bar", strnstr("Foo BaBar Baz", "Bar", 10), ft_strnstr("Foo BaBar Baz", "Bar", 10));*/
	return (0); 
}
