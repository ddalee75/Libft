/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:47:19 by chilee            #+#    #+#             */
/*   Updated: 2021/11/24 18:29:25 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dest[] = "Hello world, Hello everyone";
	char src[] = "Fuck world";

	printf("%s\n", (char *)memcpy(dest, src, 10));
	printf("%s\n", (char *)ft_memcpy(dest, src, 10));
	return (0);

}
