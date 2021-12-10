/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:16:22 by chilee            #+#    #+#             */
/*   Updated: 2021/12/08 11:18:16 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//test countword
int	main(void)
{
	const char s[] = "hello world hello paris";
	char c;
	int	tab_nb;

	c = ' ';
	tab_nb = ft_countword(s, c);
	printf("%d\n", tab_nb);
	return (0); 
}

//test cpyworld
int	main(void)
{
	const char s[] = "hello world hello paris";
	char c;
	char *tab;

	c = ' ';
	tab = (char *)ft_cpyword(s, c);
	printf("%s\n", tab);
	return (0);
}
