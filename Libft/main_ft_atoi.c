/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:11:17 by chilee            #+#    #+#             */
/*   Updated: 2021/11/30 15:55:35 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const	char nptr[] = "+424233-";
	printf("%d\n", atoi(nptr));
	printf("%d\n", ft_atoi(nptr));
	printf("\n");

	const	char nptr1[] = "-4 2 4 2 3 3";
	printf("%d\n", atoi(nptr1));
	printf("%d\n", ft_atoi(nptr1));
	printf("\n");
	
	const	char nptr2[] = "--424233";
	printf("%d\n", atoi(nptr2));
	printf("%d\n", ft_atoi(nptr2));
	printf("\n");

	const	char nptr3[] = " 042+4-233";
	printf("%d\n", atoi(nptr3));
	printf("%d\n", ft_atoi(nptr3));
	printf("\n");


	return (0);
}
