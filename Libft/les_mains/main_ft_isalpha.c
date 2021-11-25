/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:06:41 by chilee            #+#    #+#             */
/*   Updated: 2021/11/22 17:10:13 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(void)
{
	int c;
	c = 'p';
	printf("%d\n", isalpha(c));
	printf("%d\n", ft_isalpha(c));

	return (0);
}
