/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:48:27 by chilee            #+#    #+#             */
/*   Updated: 2021/12/03 12:19:05 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char s1[] = "hello paris";
	char s2[] = "hello world";
	char *dest;

	dest = ft_strjoin(s1, s2);
	printf("%s\n", dest);
	return (0);
}
