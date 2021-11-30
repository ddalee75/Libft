/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:43:26 by chilee            #+#    #+#             */
/*   Updated: 2021/11/30 18:20:20 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
//	const char s1[] = "Hello wonderful world";
//	const char s2[] = "Helso xonderful world";
	
	printf("%d\n", strncmp("test\200", "test\0", 6));
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	return (0);
}
