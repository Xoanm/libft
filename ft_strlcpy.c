/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:29:28 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/17 15:29:30 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	destlen;
	int srclen;
	
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	printf("tamaño orgien: %d\n", ft_strlen(dst));
	printf("tamaño orgien: %d\n", ft_strlen(src));
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


int	main(void)
{
	char src[] = "juancarlos";
	char dst[] = "Hola que tal como estás";

	strlcpy(dst, src, 18);
	printf("%s\n", dst);
	printf("%s\n", src);
	//printf("%lu\n", strlcpy(dst, src, 18));
	return (0);
}
