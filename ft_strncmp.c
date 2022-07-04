/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:29:55 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:29:57 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (len > 0)
	{
		if (s1[i] != s2[i] || s1[i] == 0 || s2[i] == 0)
			return (s1[i] - s2[i]);
		i++;
		len--;
	}
	return (0);
}/*
int	main(void)
{
	char *s1 = "hola";
	char *s2 = "hol";
	printf("Funcion original: %d\n", strncmp(s1, s2, 5));
	printf("%d\n", ft_strncmp(s1, s2, 5));

	return(0);
}*/