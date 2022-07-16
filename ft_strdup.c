/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:28:53 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:28:55 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

char    *ft_strdup(const char *s1)
{
	char    *s2;
	size_t  len;
	size_t  i;

	len = ft_strlen(s1);
	s2 = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!s2)
		return (0);
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	printf("%s\n", ft_strdup("Hola que tal"));
	return (0);
}*/