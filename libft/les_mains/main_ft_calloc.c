/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:55:52 by chilee            #+#    #+#             */
/*   Updated: 2021/12/01 15:53:56 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*ptr;
	char	*ptr2;
	
	ptr = calloc(5, 0);
	ptr2 = ft_calloc(5, 0);
	 
	printf("%p\n", ptr);
	printf("%p\n", ptr2);
	
	free(ptr);
	free(ptr2);
	return (0);
}
