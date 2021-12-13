/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:01:25 by chilee            #+#    #+#             */
/*   Updated: 2021/12/10 15:18:24 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char f(unsigned int n, char c)
{
	char dest;
	n = 2;
	dest = c + n;
	return (dest);
}

int	main(void)
{
	char s[] = "hello paris 123";
	char *s2;
	s2 = ft_strmapi(s, *f); 
	printf ("%s\n", s2);
	return (0);
}
