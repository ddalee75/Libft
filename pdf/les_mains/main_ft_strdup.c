/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:15:41 by chilee            #+#    #+#             */
/*   Updated: 2021/12/09 15:00:22 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *dup;
	char *dup2;

	dup = strdup("-2147483648");
	
	printf("%s %ld\n", dup, strlen(dup));
	dup2 = ft_strdup("-2147483648");
	printf("%s %ld\n", dup2, strlen(dup2));
	
	return (0);
}
