/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:47:19 by chilee            #+#    #+#             */
/*   Updated: 2021/12/01 10:36:09 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dest[] = "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
	char src[] = "zy\0xw\0vu\0\0tsr";

	printf("%s\n", (char *)memcpy(dest, src, 11));
	printf("%s\n", (char *)ft_memcpy(dest, src, 11));
	return (0);

}
