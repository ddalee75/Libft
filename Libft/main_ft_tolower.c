/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:16:18 by chilee            #+#    #+#             */
/*   Updated: 2021/11/25 18:32:24 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	size_t i;
	char str[] = "YOU ARE the Best 42 *=*";
	size_t len_s;
	
	i = 0;
	len_s = ft_strlen(str);
	while (i <= len_s)
	{
		putchar(ft_tolower(str[i]));
		i++;
	}
	putchar('\n');
	return (0);
}
