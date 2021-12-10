/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:45:36 by chilee            #+#    #+#             */
/*   Updated: 2021/12/08 20:16:28 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char s[] = "       split       this for   me  !       ";
	char c;
	char **tab;
	int i;

	i = 0;
	c = '\0';

	while (tab[i])
	{ 
		tab = ft_split(s, c);
	//	printf("%p\n", tab[i]);
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
