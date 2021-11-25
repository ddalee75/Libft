/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:24:27 by chilee            #+#    #+#             */
/*   Updated: 2021/11/22 19:29:46 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	int c;
	c = 'D';
	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));

	return (0);
}
