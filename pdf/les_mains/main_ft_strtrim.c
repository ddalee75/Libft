/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:03:37 by chilee            #+#    #+#             */
/*   Updated: 2021/12/06 18:52:25 by chilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char const s1[] = "   xxxtripouille   xxx";
	char const set[] = " x";
	char *dest;

	dest = ft_strtrim(s1, set);
	printf("%s", dest);
	return (0); 
}
