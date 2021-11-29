/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:40:53 by chilee            #+#    #+#             */
/*   Updated: 2021/11/29 11:52:07 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	unsigned char	s1[50] = "hello paris, hello everyone";
	unsigned char	s2[50] = "hello paris, hello everyone";

	printf("%s\n", (unsigned char *)memchr(s1, 'o', 20));
	printf("%p\n", (unsigned char *)memchr(s1, 'o', 20));
	
	printf("%s\n", (unsigned char *)ft_memchr(s2, 'o', 20));
	printf("%p\n", (unsigned char *)ft_memchr(s2, 'o', 20));
	return (0);

}
