/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:09:01 by chilee            #+#    #+#             */
/*   Updated: 2021/12/07 11:01:00 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *s, int c, size_t n);
int	main(void)
{
	char s[] = "Hello World";
	printf("%s\n", (char *) memset(s, '>', 5));
	printf("%s\n", (char *)ft_memset(s, '.', 5));
	return (0);
}
