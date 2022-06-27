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

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int	i;

	i = ((int)n) - 1;
	if (!s1 && !s2)
		return (NULL);
	while (i >= 0)
	{
		((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
		i--;
	}
	return (s1);
}
/*
int	main(void)
{
	char str1[] = "123456789";
	char str2[] = "abcdefghijklm";
	char *s1 = str1;
	char *s2 = str2;

	printf("%s\n", memmove(s1 + 1, s2, 5));
	printf("%s\n", str1);
	printf("%s\n", ft_memmove(s1 + 1, s2, 5));
	return (0);
}*/
