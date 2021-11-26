/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:59:07 by chilee            #+#    #+#             */
/*   Updated: 2021/11/25 18:15:52 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	size_t i;
	char	str[] = "hello Paris 42 +-+";
	size_t	len_s;
	
	i = 0;
	len_s =  ft_strlen(str);
	while (i <= len_s)
	 {
		putchar(ft_toupper(str[i]));
		i++;
	 }
	 printf("\n");
	 return (0);
}
