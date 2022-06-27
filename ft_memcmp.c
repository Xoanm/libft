/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:27:37 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/27 21:43:06 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void	*s1, const	void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}	
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "622";
	char	s2[] = "627";

	printf("%d\n", memcmp(s1, s2, 20));
	printf("%d\n", ft_memcmp(s1, s2, 20));
	return (0);
}*/
