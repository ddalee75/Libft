/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:05:24 by chilee            #+#    #+#             */
/*   Updated: 2021/12/02 10:17:40 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char s[] = "Hello World, what a wonderful woorld";
	char *dest;
	char *dest1;

	dest = ft_substr(s, 530, 11);
	dest1 = ft_substr(s, 30, 11);
	printf("%p\n", dest);
	printf("%s\n", dest1);
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
