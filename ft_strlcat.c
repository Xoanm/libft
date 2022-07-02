/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:29:13 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:29:16 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstn)
{
	size_t	i;
	size_t	x;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);

	if (dstn <= dstlen)
		return (dstn + srclen);
	i = dstlen;
	x = 0;
	while (src[x] != '\0' && i + 1 < dstn)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
/*
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


int main(void)
{
	char dest[] = "Hello there, Venus";
	char source[] = "juan";
	printf("\nresult:  %zu", ft_strlcat(dest, source, 19));
	//test(19);
	char dest1[] = "Hello there, Venus";
	char source1[] = "juan";
	printf("\nresult:  %zu", ft_strlcat(dest1, source1, 10));
    //test(10);
	char dest2[] = "Hello there, Venus";
	char source2[] = "juan";
	printf("\nresult:  %zu", ft_strlcat(dest2, source2, 1));
    //test(1);
	char dest3[] = "Hello there, Venus";
	char source3[] = "juan";
	printf("\nresult:  %zu", ft_strlcat(dest3, source3, 0));
    //test(0);
    return(0);
}*/