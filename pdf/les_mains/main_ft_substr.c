/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:05:24 by chilee            #+#    #+#             */
/*   Updated: 2021/12/06 16:55:41 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char s[] = "Hello World";
	char *dest;
	char *dest1;

	dest = ft_substr(s, 6, 5);
	dest1 = ft_substr(s, 6, 5);
	printf("%p\n", dest);
	printf("%s", dest1);
	return (0);
}

/*int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	if (!(strsub = ft_substr(str, 400, 20)))
			printf("NULL");
	return (0);

}*/
