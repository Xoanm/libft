/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 19:12:10 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/27 21:37:46 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	while (++i, i < (int)n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
/*
int	main(void)
{
	char src[] = "lorem ipsum dolor sit amet";
	char *dst;

	dst = src + 3;

	printf("%s\n", memmove(src, dst, 4));
	printf("%s\n\n", ft_memmove(src, dst, 4));
	dst = src + 3;
	printf("%s\n", memmove(src, dst, 4));
	printf("%s\n", ft_memmove(src, dst, 4));
	return (0);
}
*/