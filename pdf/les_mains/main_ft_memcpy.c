/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:47:19 by chilee            #+#    #+#             */
/*   Updated: 2021/12/07 11:11:18 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dest[] = "heldo world";
	char src[] = "cool";

	printf("%s\n", (char *)memcpy(dest, src, 11));
	printf("%s\n", (char *)ft_memcpy(dest, src, 11));
	return (0);

}
