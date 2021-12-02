/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:07:39 by chilee            #+#    #+#             */
/*   Updated: 2021/11/30 13:34:14 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const	char src[] = "Je suis la";
	char	dst[] = "";
	printf("%ld\n", strlcpy(dst, src, 0));
	printf("%s\n", dst);

	const 	char src2[] = "Je suis la";
	char	dst2[] = "";
	printf("%ld\n", ft_strlcpy(dst2, src2, 0));
	printf("%s\n", dst2);
	return (0);	
}
