/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:28:37 by jumorcil          #+#    #+#             */
/*   Updated: 2022/06/29 15:53:29 by jumorcil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
/*
int    main(void)
{
	char    s[] = "bonjour";

	printf("01 %s\n", ft_strchr(s, 'b'));
	printf("01 %s\n", strchr(s, 'b'));
	printf("1 %s\n", ft_strchr(s, 't'));// == s)
	printf("1 %s\n", strchr(s, 't'));
	printf("2 %s\n", ft_strchr(s, 'j'));// == s + 7)
	printf("2 %s\n", strchr(s, 'j'));
	printf("3 %s\n", ft_strchr(s, 'z'));// == 0)
	printf("3 %s\n", strchr(s, 'z'));
	printf("4 %s\n", ft_strchr(s, 0));// == s + strlen(s))
	printf("4 %s\n", strchr(s, 0));
	printf("5 %s\n", ft_strchr(s, 't' + 256));// == s)
	printf("5 %s\n", 	strchr(s, 't' + 256));
    return (0);
}*/
