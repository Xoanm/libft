/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 09:40:18 by jumorcil          #+#    #+#             */
/*   Updated: 2022/07/02 09:40:23 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
int main(void)
{
	char dest[] = "Hello there, Venus";
	char source[] = "juan";
	printf("\nresult:  %zu", ft_strlcpy(dest, source, 19));
	//test(19);
	char dest1[] = "Hello there, Venus";
	char source1[] = "juan";
	printf("\nresult:  %zu", ft_strlcpy(dest1, source1, 10));
    //test(10);
	char dest2[] = "Hello there, Venus";
	char source2[] = "juan";
	printf("\nresult:  %zu", ft_strlcpy(dest2, source2, 1));
    //test(1);
	char dest3[] = "Hello there, Venus";
	char source3[] = "juan";
	printf("\nresult:  %zu", ft_strlcpy(dest3, source3, 0));
    //test(0);
    return(0);
}*/

//----------------------------------------
/*
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (dst == 0 || src == 0)
		return (0);
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}*/