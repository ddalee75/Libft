/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:37:10 by chilee            #+#    #+#             */
/*   Updated: 2021/11/22 18:52:54 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c);

int	main(void)
{
	int c;
	c = '-';
	printf("%d\n", isascii(c));
	printf("%d\n", ft_isascii(c));
	
	return (0);
}

