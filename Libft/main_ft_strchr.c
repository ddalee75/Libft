/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:09:41 by chilee            #+#    #+#             */
/*   Updated: 2021/11/26 15:03:24 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	s[] = "hello beautiful.world";
	int c;
	int d;
	int e;

	c = 'b';	
	printf("%s\n", strchr(s, c));
	printf("%s\n", ft_strchr(s, c));
	
	d = '.';
	printf("%s\n", strchr(s, d));
	printf("%s\n", ft_strchr(s, d));

	e = 'z';

	printf("%p\n", strchr(s, e));
	printf("%p\n", ft_strchr(s, e));


	return (0); 
}
