/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:19:24 by chilee            #+#    #+#             */
/*   Updated: 2021/11/26 18:03:17 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char s[] = "what a wonderful world";

	int c;
	int d;
	int e;

	c = 'w';
	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	printf("\n");
	
	d = 'o';
	printf("%s\n", strrchr(s, d));
	printf("%s\n", ft_strrchr(s, d));
	printf("\n");

	e = 'i';
	printf("%p\n", strrchr(s, e));
	printf("%p\n", ft_strrchr(s, e));
	printf("\n");
	return(0);
}
