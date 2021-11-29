/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:36:56 by chilee            #+#    #+#             */
/*   Updated: 2021/11/29 18:38:20 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	big[20] = "Foo Bar Baz";
	const char	little [20] = "Bar";
	printf("%p\n", strnstr(big, little, 7));
	printf("%p\n", ft_strnstr(big, little, 7));

	printf("%s\n", strnstr(big, little, 7));
	printf("%s\n", ft_strnstr(big, little, 7));
	return (0); 
}
