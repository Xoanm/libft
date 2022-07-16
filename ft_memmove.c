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
//------------------------------------------------------------
/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = -1;
	if (!dest && !src)
		return (NULL);
	if (dest2 > src2)
		while ((int)(--n) >= 0)
			dest2[n] = src2[n];
	else
		while (++i < n)
			dest2[i] = src2[i];
	return (dest);
}*/