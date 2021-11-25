/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:23:32 by chilee            #+#    #+#             */
/*   Updated: 2021/11/22 17:44:29 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(void)
{
	int c;
	c = 'i';
	printf("%d\n", isdigit(c));
	printf("%d\n", ft_isdigit(c));
	return (0);
}
