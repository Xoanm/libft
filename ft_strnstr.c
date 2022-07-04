/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:30:06 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:30:09 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigstr, const char *shortstr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (i == ft_strlen(shortstr))
		return ((char *)bigstr);
	while (bigstr[i] && i < len)
	{
		j = 0;
		while (shortstr[j] == bigstr[i + j] && (i + j) < len)
		{
			if (shortstr[j + 1] == '\0')
			{
				return ((char *)bigstr + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *s1 = "hola hola";
	char *s2 = "hola";
	printf("Funcion original: %s\n", strnstr(s1, s2, 5));
	printf("%s\n", ft_strnstr(s1, s2, 5));

	return(0);
}*/