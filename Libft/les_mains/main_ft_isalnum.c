/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:56:01 by chilee            #+#    #+#             */
/*   Updated: 2021/11/22 18:11:51 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(void)
{
	int c;
	c = '+';
	printf("%d\n", isalnum(c));
	printf("%d\n", ft_isalnum(c));
	return (0);
}
